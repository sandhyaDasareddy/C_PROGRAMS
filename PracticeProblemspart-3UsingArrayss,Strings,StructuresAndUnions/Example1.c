/*
---------------------------------------------------------------
PROGRAM: Find the biggest and second biggest elements in an array
---------------------------------------------------------------

💡 LOGIC / APPROACH:

1. Read the number of elements and store them in an array.
2. Initialize two variables 'largest' and 'second' with the first element.
3. Traverse the array using a loop:
     - If the current element is greater than 'largest',
       update 'second = largest' and 'largest = current element'.
     - Else if it’s smaller than 'largest' but greater than 'second',
       update 'second = current element'.
4. Finally, print both 'largest' and 'second largest' numbers.

---------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, i, largest, second;

    // Step 1: Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];  // Declare array of size n

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Initialize both largest and second with the first element
    largest = second = a[0];

    // Step 4: Traverse the array to find the two biggest numbers
    for (i = 1; i < n; i++) {
        if (a[i] > largest) {
            second = largest;   // old largest becomes second
            largest = a[i];     // update new largest
        }
        else if (a[i] > second && a[i] != largest) {
            second = a[i];      // update second largest
        }
    }

    // Step 5: Display the results
    printf("\nLargest element = %d", largest);
    printf("\nSecond largest element = %d", second);

    return 0;
}


/*
Output:-
--------
Enter number of elements: 7
Enter 7 elements:
4
5
9
2
7
5
3

Largest element = 9
Second largest element = 7

*/