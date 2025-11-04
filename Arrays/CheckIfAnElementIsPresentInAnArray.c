#include <stdio.h>
int main()
{
    int a[100], n, i, key, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element %d is present at position %d.\n", key, i + 1);
    else
        printf("Element %d is not present in the array.\n", key);

    return 0;
}

/*
Output:
--------

case-1:-
Enter the number of elements: 5
Enter 5 elements:
8
74
15
96
35
Enter the element to search: 14
Element 14 is not present in the array.


case-2:
Enter the number of elements: 6
Enter 6 elements:
8
6
7
1
4
5
Enter the element to search: 5
Element 5 is present at position 6.
*/