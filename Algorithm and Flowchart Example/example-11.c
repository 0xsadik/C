// দুটি সংখ্যার মধ্যে বড় সংখ্যাটি নির্ণয়

#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("Largest num1.\n");
    }
    else {
        printf("Largest num2\n");
    }

    return 0;
}