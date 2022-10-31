
// --?? Q: write a program to check whether any of the digit in a number appears more than onec:

#include<stdio.h>
int main() 
{
    int seen[10] = {0};
    int N;
    printf("Enter the number: ");
    scanf("%d", &N);

    int rem;
    while(N > 0) {
        rem = N % 10;
        if (seen [rem] == 1)
            break;
        seen[rem] = 1;
        N = N / 10;
    }

    if (N > 0) {
        printf("Yes\n");
    }
    else {
        printf("N0\n");
    }

    return 0;
}