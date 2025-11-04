/*


1 2 3 4 5 
2 3 4 5
3 4 5
4 5
5

*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = i; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
