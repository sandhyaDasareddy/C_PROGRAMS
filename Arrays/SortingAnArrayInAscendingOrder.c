/*
Topic: Sorting an Array in Ascending Order in C
-------------------------------------------------
Concept:
In C language, sorting means arranging the elements of an array 
in a specific order — either ascending (smallest to largest) 
or descending (largest to smallest).

In this program, we will sort the array elements in ascending order.

Logic:
1. Accept 'n' elements from the user.
2. Store the elements in an array.
3. Compare each element with all other elements using nested loops.
4. If an element is greater than the next one, swap them.
5. Finally, print the sorted array.

Algorithm:
-----------
Step 1: Start
Step 2: Declare an array and variables (a[], n, i, j, temp)
Step 3: Read the size of the array (n)
Step 4: Input array elements
Step 5: Use nested loops to compare and swap elements
Step 6: Display the sorted array
Step 7: Stop

*/

#include <stdio.h>
int main()
{
    int a[100], n, i, j, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting logic (Ascending order)
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Array in ascending order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/*
Output:-
------
Enter the number of elements: 5
Enter 5 elements:
8
4
7
1
2
Array in ascending order:
1 2 4 7 8

*/