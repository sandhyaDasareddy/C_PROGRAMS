/*
Program: Calculate employee commission and total earnings
----------------------------------------------------------
Commission = 25% of total sales + 1200 (fixed amount)
*/

#include <stdio.h>
int main()
{
    float sales, earning;
    printf("Enter sales in Rupee: ");
    scanf("%f", &sales);

    earning = (0.25 * sales) + 1200;
    printf("Earning is: Rs.%.2f\n", earning);

    return 0;
}
