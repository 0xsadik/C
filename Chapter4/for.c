

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

#include<stdio.h>
int main()
{
    int n, i;
    for ( n = 1; n <= 20; n++) {
        for(i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("\n");
    }
    return 0;
}