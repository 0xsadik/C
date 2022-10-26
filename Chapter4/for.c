

// #include<stdio.h>
// int main()
// {
//     int i;
//     int n = 5;
//     for (i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }


// another way 

// #include<stdio.h>
// int main()
// {
//     int i;
//     int n = 5;
//     int m = 0;
//     for (i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, m = m + n);
//     }
//     return 0;
// }


// another example 

// #include<stdio.h>
// int main()
// {
//     int i = 1;
//     int n = 5;
//     int m = 0;
//     for ( ; ; ) {
//         if ( i > 10) {
//             break;
//         }
//         printf("%d x %d = %d\n", n, i, m = m + n);
//         i = i + 1;
//     }
//     return 0;
// }


// nested loop

// #include<stdio.h>
// int main()
// {
//     int n, i;
//     for ( n = 1; n <= 20; n++) {
//         for(i = 1; i <= 10; i++) {
//             printf("%d x %d = %d\n", n, i, n * i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()

// {
//     int n, m, i, j;
//     scanf("%d", &n);

//     for (i = 0; i <= n; i++) {
//         scanf("%d", &m);

//         for (j = 10; j <= m; j++) {
//             if ( j % 11 == 0) {
//                 continue;
//             }
//             printf("%d\n", j);
//         }
//     }
//     return 0;
// }





// #include<stdio.h>
// int main()
// {
//     int a, b, c;

//     for (a = 1; a <= 3; a++) {
//         for (b = 1; b <= 3; b++) {
//             for (c = 1; c <= 3; c++) {
//                 printf("%d, %d, %d\n", a, b, c);
//             }
//             printf("\n");
//         }
//     }
// }







// #include<stdio.h>
// int main()
// {
//     int a, b, c, d;
    
//     for (a = 1; a <= 4; a++) {
//         for (b = 1; b <= 4; b++) {
//             for (c = 1; c <= 4; c++) {
//                 for (d = 1; d <= 4; d++) {
//                      printf("%d, %d, %d, %d\n", a, b, c, d);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int a, b, c;

    for ( a = 1; a <= 3; a++ ){
        for (b = 1; b <= 3 && b != a; b++) {
            for (c = 1; c <= 3 && c != a && c != b; c++) {
                printf("%d, %d, %d\n", a, b, c);
            }
            printf("\n");
        }
    }
}