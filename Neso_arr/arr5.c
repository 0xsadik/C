// count array elements using sizeof() operator 

// sizeof(name_of_arr) / sizeof(name_of_arr[0])

#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3, 2, 3, 1, 3, 4, 6, 6, 7, 3, 2, 6, 5, 3, 5, 6, 8};
    printf("%ld\n", sizeof(arr) / sizeof(arr[0]));
}