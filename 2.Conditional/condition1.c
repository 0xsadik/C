// #include<stdio.h>
// int main()
// {
//     int n;
//     n = 10;

//     if(n >= 0) {
//         printf("The number is positive\n");
//     }
//     else {
//         printf("The number is negative\n");
//     }
// }


// --> another way to write same program

// #include<stdio.h>
// int main()
// {
//     int n;
//     n = 10;

//     if (n < 0) {
//         printf("The number is negative\n");
//     }
//     else {
//         printf("The number is positive\n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int n = 10;
//     if (n < 0) {
//         printf("The number is negative\n");
//     }
//     else if(n > 0) {
//         printf("The number is positive\n");
//     }
//     else if(n == 0) {
//         printf("The number is zero\n");
//     }

//     return 0;
// }


// --> another way 

// #include<stdio.h>
// int main()
// {
//     int n = 10;

//     if(n < 0) {
//         printf("The number is negative\n");
//     }
//     else if (n > 0) {
//         printf("The number is positive\n");
//     }
//     else {
//         printf("The number is zero \n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int number = 12;
//     if(number > 10) {
//         printf("The number is greater than ten \n");
//     }
// }


// #include<stdio.h>
// int main()
// {
//     int n = 10;

//     if (n < 30) {
//         printf("n is less than 30\n");
//     }
//     else if (n < 50) {
//         printf("n is less than 50\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n = 10;
//     if (n < 30) {
//         printf("n is less than 30.\n");
//     }
//     if (n < 50) {
//         printf("n is less than 50\n");
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int number, remainder;
//     number = 5;

//     remainder = number % 2;
//     if ( remainder == 0) {
//         printf("The number is even.\n");
//     }
//     else {
//         printf("The number is odd.\n");
//     }
// }

// without remainder operator 

// #include<stdio.h>
// int main()
// {
//     int number, remainder, vagfol;
//     number = 5;
//     vagfol = number / 2;
//     remainder = number - (2 * vagfol);
//     if (remainder == 0) {
//         printf("The number is even");
//     }
//     else {
//         printf("The number is odd\n");
//     }

//     return 0;
// }



#include<stdio.h>
int main()
{
    char ch = 'W';
    if (ch > 'a' && ch <= 'Z') {
        printf("%c is lower case\n", ch);
    }
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is upper case\n", ch);
    }

    return 0;
}