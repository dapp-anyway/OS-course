#include <stdio.h>
#include <math.h>

int page_frames = 100;

int main() {

    FILE *input;

    if ((input = fopen("../week09/input.txt", "r")) == NULL) {
        return 0;
    }

    int pages[page_frames];
    int ref[page_frames];

    for (int i = 0; i < page_frames; i++) {
        int *a;
        fscanf(input, "%d", &a);
        pages[i] = -1;
        ref[i] = 0;
    }

    int plus = pow(2, 16);

    int page;

    int miss = 0;
    int hit = 0;


    while (fscanf(input, "%d", &page) != EOF) {
        int check = 1;
        for (int i = 0; i < page_frames; i++) {
            if (pages[i] == page) {
                hit++;
                check = 0;
                for (int i = 0; i < page_frames; i++) {
                    ref[i] = ref[i] / 2;
                }
                ref[i] = ref[i] + plus;
                break;
            }
        }

        if (check) {
            miss++;
            check = 1;
            for (int i = 0; i < page_frames; i++) {
                if (pages[i] == -1) {
                    for (int i = 0; i < page_frames; i++) {
                        ref[i] = ref[i] / 2;
                    }
                    ref[i] = ref[i] + plus;
                    pages[i] = page;
                    check = 0;
                    break;
                }
            }

            if (check) {
                int index = 0;
                int value = ref[index];
                for (int i = 1; i < page_frames; i++) {
                    if (value > ref[i]) {
                        value = ref[i];
                        index = i;
                    }
                }
                pages[index] = page;
                for (int i = 0; i < page_frames; i++) {
                    ref[i] = ref[i] / 2;
                }
                ref[index] = ref[index] + plus;
            }
            check = 1;
        }
    }

    float ratio = (float) hit / (float) miss;
    
    printf("Hit/Miss: %f\n", ratio);

    fclose(input);
    return 0;

}
