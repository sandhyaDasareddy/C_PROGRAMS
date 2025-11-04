/*
---------------------------------------------------------------------
PROGRAM: Insert a new element into an array at a given position
---------------------------------------------------------------------

💡 LOGIC / APPROACH:

1. Read the number of elements (n) and store them in an array.
2. Read all the array elements from the user.
3. Read the position where the new element has to be inserted.
   (Array positions are usually considered starting from 1 for user input.)
4. Read the new element to be inserted.
5. Shift all elements from that position onwards one step to the right.
   (Start shifting from the end of the array towards the given position.)
6. Insert the new element at the given position.
7. Finally, display the updated array.

---------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, i, pos, value;

    // Step 1: Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100]; // declare array with maximum size

    // Step 2: Input elements of array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Step 3: Input the position and the new value
    printf("Enter the position to insert new element: ");
    scanf("%d", &pos);
    printf("Enter the new element to insert: ");
    scanf("%d", &value);

    // Step 4: Shift elements one position to the right
    // Start from the end and move towards the given position
    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    // Step 5: Insert new value at given position
    a[pos - 1] = value; // position adjusted (1-based to 0-based)

    n++; // increase array size by 1

    // Step 6: Display the new array
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
