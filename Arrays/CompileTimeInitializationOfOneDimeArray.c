#include <stdio.h>
int main()
{
    int i;
    int marks[5] = {80, 90, 75, 85, 95}; // compile-time initialization

    printf("Marks of 5 students:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
