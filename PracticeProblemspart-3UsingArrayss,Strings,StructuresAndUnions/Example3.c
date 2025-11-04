/*
---------------------------------------------------------------------
PROGRAM: Sort the first half of an array in ascending order
         and the second half in descending order
---------------------------------------------------------------------

💡 LOGIC / APPROACH:

1. Read the number of elements (n) and store them in an array.
2. Divide the array into two halves:
      - First half: from index 0 to (n/2 - 1)
      - Second half: from index n/2 to (n - 1)
3. Sort the first half in ascending order.
   (Use simple bubble sort or nested loops.)
4. Sort the second half in descending order.
5. Finally, display the complete array after sorting.

Note:
If n is odd, the middle element will be considered part of the first half.

---------------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int n, i, j, temp;

    // Step 1: Input the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100]; // Declare array

    // Step 2: Input all elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int mid = n / 2; // find middle index

    // Step 3: Sort the first half in ascending order
    for (i = 0; i < mid - 1; i++) {
        for (j = i + 1; j < mid; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Step 4: Sort the second half in descending order
    for (i = mid; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) { // reverse comparison for descending
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Step 5: Display the final sorted array
    printf("\nArray after sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
Output:-
------
Enter number of elements: 6
Enter 6 elements:
1
2
3
4
5
6

Array after sorting:
1 2 3 6 5 4 

*/
