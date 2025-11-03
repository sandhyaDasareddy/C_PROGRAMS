/*
Program: Find the Area of Circle, Square, and Rectangle
-------------------------------------------------------

Definition:
This program calculates the area of different shapes using standard mathematical formulas.

Formulas:
1. Area of Circle    = π * r * r
2. Area of Square    = side * side
3. Area of Rectangle = length * breadth
*/

#include <stdio.h>
#define PI 3.14  // Constant value for π

int main()
{
    float radius, side, length, breadth;
    float area_circle, area_square, area_rectangle;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area_circle = PI * radius * radius;
    printf("Area of Circle = %.2f\n", area_circle);

    printf("Enter side of the square: ");
    scanf("%f", &side);
    area_square = side * side;
    printf("Area of Square = %.2f\n", area_square);

    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area_rectangle = length * breadth;
    printf("Area of Rectangle = %.2f\n", area_rectangle);

    return 0;
}

/*
Output:-
-------
Enter radius of the circle: 5
Area of Circle = 78.50
Enter side of the square: 7
Area of Square = 49.00
Enter length and breadth of the rectangle: 4 8
Area of Rectangle = 32.00
*/