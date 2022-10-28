
#include<stdio.h>
int main()
{
    int a[10], sum = 0, i;

    printf("Enter 10 numbers: ");
    for ( i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++) {
        sum = sum + a[i];
    }

    printf("The sum is: %d\n", sum);
    printf("The average is: %.2f\n", (float)sum / 10);
}