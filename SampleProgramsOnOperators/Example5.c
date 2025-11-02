/*
Program: Calculate Simple Interest
----------------------------------

Definition:
Simple Interest is the extra money paid or earned on a principal amount over time.

Formula:
SI = (P × T × R) / 100

Where:
P = Principal amount
T = Time (in years)
R = Rate of interest
*/

#include <stdio.h>

int main()
{
    float P, T, R, SI;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    SI = (P * T * R) / 100;

    printf("Simple Interest = %.2f", SI);

    return 0;
}
