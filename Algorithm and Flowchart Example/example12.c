// তিনটি সংখ্যার মধ্যে বড় সংখ্যা নির্ণয়

#include<stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("large number is num1.\n");
    }
    else if ( num2 > num1 && num2 > num3) {
        printf("large number is num2.\n");
    }
    else {
        printf("large number is num3.\n");
    }

    return 0;
}