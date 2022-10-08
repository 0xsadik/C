// #include<stdio.h>
// int main()
// {
//     int n = 10;
//     if (n < 0) {
//         printf("The number is negative.\n");
//     }
//     else {
//         printf("The number is positive\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n = 11;
//     if (n < 0) {
//         printf("The number is negative.\n");
//     }
//     else if ( n > 0) {
//         printf("The number is poitive\n");
//     }
//     else {
//         printf("The number is zero.\n");
//     }

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n = 12;

//     if ( n > 10) {
//         printf("The number is greater than 10\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n = 10;
//     if (n < 30) {
//         printf("n is less than 30\n");
//     }
//     else if ( n < 50) {
//         printf("n is less than 50\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num = 4, remainder;
//     remainder = num % 2;
//     if (remainder == 0) {
//         printf("The number is even\n");
//     }
//     else {
//         printf("The number is odd\n");
//     }

//     return 0;
// }


// --> without remainder varibale 

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number to check even or odd: ");
//     scanf("%d", &num);
//     if (num % 2 == 0) {
//         printf("The number is even\n");
//     }
//     else {
//         printf("The number is odd\n");
//     }

//     return 0;
// }


// --> without mod operator 

// #include<stdio.h>
// int main()
// {
//     int num, vagfol, vagsesh;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // vagfol = num / 2;
//     // vagsesh = num - (2 * vagfol);
//     vagsesh = num - (2 * (num / 2 ));

//     printf("vagsesh = %d\n", vagsesh);

//     return 0;

// }


#include<stdio.h>
int main()
{
    int num = 7, vagsesh;
    vagsesh = num - (2 * (num / 2));
    if (vagsesh == 0) {
        printf("The number is even.\n");
    }
    else {
        printf("The number is odd.\n");
    }

    return 0;
}

