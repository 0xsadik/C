
/*  
    --?? Q: write a program to print the following numbers in 'reverse order'.
    34 56 54 32 67 89 90 32 21

    Assume that all these numbers are stored in an array

*/

#include<stdio.h>
int main()
{
    int a[9] = {34, 56, 54, 32, 67, 89, 90, 32, 21};
    int i;

    // main array
    for (i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // reverse array
    for (i = 8; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}