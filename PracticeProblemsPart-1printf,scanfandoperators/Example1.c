/*
Question:
There is an IT industry that pays employees on a commission basis.
The commission is 25% of the monthly gross sale with an additional fixed amount of Rs. 1200 per month.

Example:
If an employee made a sale of Rs. 65,000,
Commission = 25% of 65000 + 1200 = Rs. 17450

Sample Input / Output:

Enter sales in Rupee: 50000
Earning is: Rs.13700.00

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

/*
Enter sales in Rupee: 5000
Earning is: Rs.2450.00
*/