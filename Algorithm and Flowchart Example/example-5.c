// তিনটি সংখ্যার গড় নির্নয় 

#include<stdio.h>
int main()
{
    int num1, num2, num3, average;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3;
    printf("Average is: %d\n", average);

    return 0;
}