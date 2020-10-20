#include <stdio.h>
#include <dirent.h>

int main() {

    DIR *rep = opendir("tmp");

    if (rep == NULL){
        return -1;
    }

    long val_ino[1010];
    char* val_name[1010];

    for(int i = 0; i < 1010; i++) {
        val_ino[i] = -1;
    }

    int count = 0;
    struct dirent *dir;
    while((dir = readdir(rep)) != NULL) {
        val_ino[count] = dir->d_ino;
        val_name[count] = dir->d_name;
        count++;
    }

    for (int i = 0; i < count; i++){
        for (int j = i; j < count; j++){
            if(i != j) {
                if(val_ino[i] == val_ino[j] && val_ino[j] != -1) {
                    printf("%s and %s have the same i-node %lu.", val_name[i], val_name[j] , val_ino[j]);
                    printf("\n");
                    val_ino[j] = -1;
                }
            }

        }
    }
    return 0;
}