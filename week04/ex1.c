#include <stdio.h>
#include <unistd.h>

int main()
{

    int n = fork();

    if (n == 0)
        printf("Hello from child %d \n", getpid() - n);
    else
        printf("Hello from parent %d \n", getpid() - n);

    return 0;
}

/* 

Output 1:
Hello from parent -1                                                                                                                           
Hello from child 6578 
Output 2:
Hello from parent -1                                                                                                                           
Hello from child 5480  
Output 3:
Hello from parent -1                                                                                                                           
Hello from child 11396
Output 4:
Hello from parent -1 
Output 5:
Hello from parent -1                                                                                                                           
Hello from child 3651  
Output 6:
Hello from parent -1 
Output 7:
Hello from parent -1                                                                                                                           
Hello from child 1767 
Output 8:
Hello from parent -1                                                                                                                           
Output 9:
Hello from parent -1
Output 10:
Hello from parent -1                                                                                                                           
Hello from child 1574   

Thus, the parent [PID-n] is always -1

*/
