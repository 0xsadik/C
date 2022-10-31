
#include<stdio.h>
#define N 10 // whic is macro i guess

int main()
{
    int a[N], i;
    for (i = 0; i < N; i++) {
        printf("Enter the input for index %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArary elements are as follows:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}