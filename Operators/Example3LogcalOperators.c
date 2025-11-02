/*
Logical operators :-
------------------
Definition:- Logical operators are used to combine two or more conditions (expressions).
They help in decision-making by evaluating whether a condition is true (1) or false (0).

These operators are mostly used inside if, while, and for statements to control the program flow.


List of Logical Operators:-
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| Operator | Name / Meaning | Description                                             | Example (`a=10, b=5, c=0`) | Result                                                |          |   |           |   |
| -------- | -------------- | ------------------------------------------------------- | -------------------------- | ----------------------------------------------------- | -------- | - | --------- | - |
| `&&`     | Logical AND    | Returns **true (1)** if **both** conditions are true    | `(a > b) && (a != 0)`      | 1                                                     |          |   |           |   |
| `        |                | `                                                       | Logical OR                 | Returns **true (1)** if **any one** condition is true | `(a < b) |   | (a != 0)` | 1 |
| `!`      | Logical NOT    | Reverses the result — true becomes false and vice versa | `!(a == b)`                | 1                                                     |          |   |           |   |
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


Explanation
---------------

1. Logical AND (&&):--  It will check whether All conditions must be true for the result to be true.

=>If any one condition is false → result = 0

Example:

(a > b) && (a != 0)
→ (10 > 5) && (10 != 0)
→ 1 && 1 → 1 (True)


2. Logical OR (||)

If any condition is true → result = 1

Only when all are false → result = 0

Example:

(a < b) || (a != 0)
→ (10 < 5) || (10 != 0)
→ 0 || 1 → 1 (True)


3. Logical NOT (!)

It inverts the condition.

If condition is true → becomes false (0).

If false → becomes true (1).

Example:

!(a == b)
→ !(10 == 5)
→ !(0) → 1 (True)
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 5, c = 0;

    printf("(a > b) && (b != 0) : %d\n", (a > b) && (b != 0));
    printf("(a < b) || (a != 0) : %d\n", (a < b) || (a != 0));
    printf("!(a == b) : %d\n", !(a == b));

    return 0;
}
