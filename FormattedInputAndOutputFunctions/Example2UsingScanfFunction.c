/*
Formatted Input Function – scanf():--
----------------------------------
Purpose: It is Used to read input (data) from the user in a specific format.

Syntax: scanf("format string", &variable1, &variable2, ...);

Note: Always use & (address-of operator) before variable names in scanf().

Example:
-------
int age;
printf("Enter your age: ");
scanf("%d", &age);
printf("Your age is %d", age);

Output:
------
Enter your age: 20
Your age is 20
Common Format Specifiers in scanf():
------------------------------------------------------------
| Format Specifier | Meaning               | Example Input |
| ---------------- | --------------------- | ------------- |
| `%d`             | Integer               | `10`          |
| `%f`             | Floating-point number | `12.56`       |
| `%c`             | Character             | `A`           |
| `%s`             | String                | `Hello`       |
------------------------------------------------------------

Example: Reading and Displaying Multiple Values

*/
#include <stdio.h>
int main() {
    int roll;
    char name[20];
    float marks;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);

    return 0;
}
