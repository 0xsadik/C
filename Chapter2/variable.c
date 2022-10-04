// #include<stdio.h>
// int main()
// {
//     int a;
//     int b;
//     int sum;
//     a = 50;
//     b = 60;
//     sum = a + b;
//     printf("sum is %d\n", sum);

//     return 0;
// }


//  -> the other way

// #include<stdio.h>
// int main()
// {
//     int a, b, sum;
//     a = 10;
//     b = 40;
//     sum = a + b;
//     printf("sum is: %d \n", sum);

//     return 0;
// }


// -> with value 

// #include<stdio.h>
// int main()
// {
//     int a = 50, b = 60, sum;
//     sum = a + b;
//     printf("Sum is: %d\n", sum);

//     return 0;
// }


// --> task

// #include<stdio.h>
// int main()
// {
//     int x, y;
//     x = 1;
//     y = x;
//     x = 2;

//     printf("%d\n", y);

//     return 0;
// }


// --> another one 

// #include<stdio.h>
// int main()
// {
//     int a = 123, b = 234, sum;
//     sum = a + b;

//     printf("%d + %d = %d\n", a, b, sum);
    
//     return 0;
// }

// by altering ... 

#include<stdio.h>
int main()
{
    int a = 123, b = 234, sum;
    sum = a + b;

    printf("%d + %d = %d\n", b, a, sum);
    
    return 0;
}
