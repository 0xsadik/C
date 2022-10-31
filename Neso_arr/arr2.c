// Designated initializer 

// int ar[10] = {1, 0, 0, 0, 0, 2, 3, 0, 0, 0};

// we want:
//     - 1 in position 0
//     - 2 in position 5
//     - 3 in poistion 6


// int arr[10] = {[0] = 1, [5] = 2, [6] = 3};

// this way of initialization is called ' designated initialization' and each number
// in the square brackets   is said to be a ' designator'.


// >> bea careful! <<
// if the length of an array is 'n', then each designator must be between o and n-1;

// --? but if there is a clash, then designated initializer will win.

// int a[] = {1, 2, 3, [2] = 4, [6] = 45};
//                 ==

// int a[] = {1, 2, 4, 0, 0, 0, 45};

// ---------------------------------