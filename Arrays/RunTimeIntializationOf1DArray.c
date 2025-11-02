#include <stdio.h>
int main()
{
    int n, i;
    int a[100]; // array with maximum size 100

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nArray elements are:\n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}


/*
Output:-
Enter the number of elements: 5
Enter 5 elements:
Enter element 1: 8 
Enter element 2: 5
Enter element 3: 4
Enter element 4: 7
Enter element 5: 11

Array elements are:
a[0] = 8
a[1] = 5
a[2] = 4
a[3] = 7
a[4] = 11

*/