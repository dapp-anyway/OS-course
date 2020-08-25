//
// Created by dappa on 25.08.2020.
//

#include <stdio.h>
#include <string.h>

int main() {

    char user[100];
    fgets(user, sizeof(user), stdin);
    strrev(user);
    puts(user);

    return 0;
}
