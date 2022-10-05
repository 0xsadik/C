// task - 0

// #include<stdio.h>
// int main()
// {
//     int num1, num2, sum;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     sum = num1 + num2;
//     printf("sum is: %d\n", sum);
//     sum = num1 - num2;
//     printf("sum is: %d\n", sum);
//     sum = num1 * num2;
//     printf("sum is: %d\n", sum);

// }



// --> with double type 

#include<stdio.h>
int main()
{
    double num1, num2, sum;
    printf("enter first number:");
    scanf("%lf", &num1);
    printf("enter second number:");
    scanf("%lf", &num2);

    sum = num1 + num2;
    printf("addition is: %lf\n", sum);

    sum = num1 - num2;
    printf("Subtraction is: %lf\n", sum);

    sum = num1 * num2;
    printf("multiplication is: %lf\n", sum);

    return 0;
}



