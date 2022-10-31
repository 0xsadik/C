// ====== initializing 1D Array ======

// --? method 1: 
// arr[5] = {1, 2, 5, 34, 43};

// --? method 2:
// arr[] = {1, 2, 5, 43, 32}

// --? method 3:

// int arr[5];

// arr[0] = 1;
// arr[1] = 2;
// arr[2] = 5;
// arr[3] = 123;
// arr[4] = 32;
// ------------------> this one 'not a preferred method'

// --? method 4:

// int arr[5];

// for (i = 0; i < 5; i++) {
//     scanf("%d", &arr[i]);
// }


// -?? Q: what if number of elements are lesser than the length specified ?
// int arr[10] = {45, 6, 2, 78, 5, 6}

// --> A: the remaining locations of the array are filled by value 0;
// int arr[10] = {45, 6, 2, 78, 5, 6, 0, 0, 0, 0}


// >> A small Tip <<

// instead of writing this:

// int arr[10];
// for (i = 0; i < 10; i++) {
//     arr[i] = 0;
// }


// you can write this:

// int arr[10] = {0};