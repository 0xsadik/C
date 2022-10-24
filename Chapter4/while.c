
// while 

// #include<stdio.h>
// int main()
// {
//     int n = 1;

//     while (n <= 10) {
//         printf("%d\n", n);
//         n++;
//     }

//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n = 1;
//     while (n <= 10) {
//         printf("%d\n", n);
//     }
//     n++;

//     return 0;
// }


// break statement 

// #include<stdio.h>
// int main()
// {
//     int n = 1;
//     while ( n <= 100) {
//         printf("%d\n", n);
//         n++;

//         if(n > 10) {
//             break;
//         }
//     }

//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n = 0;
//     while(n < 10) {
//         n = n + 1;
//         if (n % 2 == 0) {
//             printf("%d\n", n);
//         }
//     }
//     return 0;
// }






// #include<stdio.h>
// int main()
// {
//     int n = 0;
//     while (n < 10) {
//         n = n + 1;
//         if (n % 2 == 0 ) {
//             continue;
//         }
//         printf("%d\n", n);
//     }
//     return 0;
// }


// 5 er namta 

// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     int n = 5;
//     while ( i <= 10) {
//         printf("%d x %d = %d\n", n, i, n * i);
//         i++;
//     }
//     return 0;
// }



#include<stdio.h>
int main()
{
    int i = 1;
    int m = 0;
    int n = 5;
    while ( i <= 10) {
        printf("%d x %d = %d\n", n, i, m = m + n);
        i = i + 1;
    }
    return 0;
}