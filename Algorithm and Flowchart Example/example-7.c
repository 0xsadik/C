// ত্রিভুজের তিনটি বাহুর দৈর্ঘ দেয়া আছে তার ক্ষেত্রফল নির্ণয়।

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, s, area;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    s = (a + b + c) / 2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of Triangle: %d\n", area);

    return 0;
}