// ফারেনহাইট স্কেলের তাপমাত্রাকে সেলসিয়াসে রুপান্তর

#include<stdio.h>
int main()
{
    int f, c;
    scanf("%d", &f);

    c = (f-32) * 5 / 9;
    printf("Celsius: %d\n", c);

    return 0;
}