#include <stdio.h>
#include <unistd.h>

void loop(int a) {

    for(int i = 0; i < a; i++) {
        fork();
    }
}

int main()
{
    // loop(3);
    loop(5);
    sleep(5);

    return 0;
}

/*

result of loop(3):
8 processes were created

Main process: P0
1st fork: P1
2nd fork: P2, P3
3rd fork: P4, P5, P6, P7


result of loop(5):
32 processes were created

Main process: P0
1st fork: P1
2nd fork: P2, P3
3rd fork: P4, P5, P6, P7
4th fork: P8, P9, P10, P11, P12, P13, P14, P15
5th forK: P16, ... , P31


So the total number of processes is 2^N
*/