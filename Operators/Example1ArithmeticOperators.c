/*
Operators:---
------------------
Definition:- Operators are symbols that tell the compiler to perform specific mathematical or logical operations on variables and values.
They are used to manipulate data and variables in a program.

For example:
-----------
int a = 10, b = 5;
int sum = a + b;

Here, + is an operator that adds two numbers.

Types of Operators in C :- 
----------------------------------------------------------------------------------
| Type                                | Description                               |
| ----------------------------------- | ----------------------------------------- |
| 1️⃣ Arithmetic Operators            | Used for basic mathematical operations    |
| 2️⃣ Relational Operators            | Used to compare two values                |
| 3️⃣ Logical Operators               | Used to combine or invert conditions      |
| 4️⃣ Assignment Operators            | Used to assign values to variables        |
| 5️⃣ Increment / Decrement Operators | Used to increase or decrease a value by 1 |
| 6️⃣ Conditional (Ternary) Operator  | Used as a shortcut for `if-else`          |
| 7️⃣ Bitwise Operators               | Used to perform bit-level operations      |
| 8️⃣ Special Operators               | Includes `sizeof` and pointer operators   |
----------------------------------------------------------------------------------


1. Arithmetic Operators:--
-----------------------------------------------------
| Operator | Description         | Example | Result |
| -------- | ------------------- | ------- | ------ |
| `+`      | Addition            | `a + b` | 15     |
| `-`      | Subtraction         | `a - b` | 5      |
| `*`      | Multiplication      | `a * b` | 50     |
| `/`      | Division            | `a / b` | 2      |
| `%`      | Modulus (Remainder) | `a % b` | 0      |
-----------------------------------------------------
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);
    return 0;
}

/*
Output:-
------
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
Modulus = 0
*/
