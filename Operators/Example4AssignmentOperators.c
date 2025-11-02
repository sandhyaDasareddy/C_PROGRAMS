/*
Assignment Operators:--
---------------------

Definition:- Assignment operators are used to assign values to variables.
They are used to store the result of an expression into a variable.

=> The basic assignment operator is =,
and there are also compound assignment operators (like +=, -=, etc.) that perform an operation and assignment in a single step.

List of Assignment Operators:
-----------------------------------------------------------------------------------------
| Operator | Example  | Meaning / Explanation                           | Equivalent To |
| -------- | -------- | ----------------------------------------------- | ------------- |
| `=`      | `a = b`  | Assigns value of `b` to `a`                     | —             |
| `+=`     | `a += b` | Adds `b` to `a` and stores result in `a`        | `a = a + b`   |
| `-=`     | `a -= b` | Subtracts `b` from `a` and stores result in `a` | `a = a - b`   |
| `*=`     | `a *= b` | Multiplies `a` by `b` and stores result in `a`  | `a = a * b`   |
| `/=`     | `a /= b` | Divides `a` by `b` and stores result in `a`     | `a = a / b`   |
| `%=`     | `a %= b` | Stores remainder of `a / b` in `a`              | `a = a % b`   |
-----------------------------------------------------------------------------------------



Explanation with Example

Let’s take a = 10 and b = 5
----------------------------------------------------------
| Expression | Calculation          | Final Value of `a` |
| ---------- | -------------------- | ------------------ |
| `a = b`    | `a = 5`              | 5                  |
| `a += b`   | `a = a + b` → 10 + 5 | 15                 |
| `a -= b`   | `a = a - b` → 10 - 5 | 5                  |
| `a *= b`   | `a = a * b` → 10 × 5 | 50                 |
| `a /= b`   | `a = a / b` → 10 ÷ 5 | 2                  |
| `a %= b`   | `a = a % b` → 10 % 5 | 0                  |
----------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 5;

    printf("Initial value of a = %d\n", a);

    a += b;
    printf("After a += b : %d\n", a);

    a -= b;
    printf("After a -= b : %d\n", a);

    a *= b;
    printf("After a *= b : %d\n", a);

    a /= b;
    printf("After a /= b : %d\n", a);

    a %= b;
    printf("After a %%= b : %d\n", a);

    return 0;
}
