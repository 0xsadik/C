// সেলসিয়াস স্কেলের তাপমাত্রাকে ফারেনহাইট এ রুপান্তর

#include<stdio.h>
int main()
{
    int c, f;
    scanf("%d", &c);

    f = 9 * c / 5 + 32;
    printf("Fahrenheit: %d\n", f);

    return 0;
}