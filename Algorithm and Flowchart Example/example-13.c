// তিনটি সংখ্যার মধ্যে ছোট সংখ্যাটি নির্ণয় 

#include<stdio.h>
int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("a is smallest number.\n");
    }
    else if (b < a && b < c) {
        printf("b is smallest number.\n");
    }
    else {
        printf("c is smallest number.\n");
    }

    return 0;
}