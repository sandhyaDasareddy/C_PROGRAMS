/*
Increment and Decrement Operators :-
----------------------------------

Definition:- Increment and Decrement operators are unary operators (they operate on a single variable) used to increase or decrease the value of a variable by 1.

=> They are very useful in loops, counters, and mathematical expressions.

Types of Increment and Decrement Operators
----------------------------------------------------------------
| Operator | Meaning            | Example | Effect             |
| -------- | ------------------ | ------- | ------------------ |
| `++`     | Increment Operator | `a++`   | Increases `a` by 1 |
| `--`     | Decrement Operator | `a--`   | Decreases `a` by 1 |
----------------------------------------------------------------

Forms of Increment / Decrement Operators
------------------------------------------------------------------------------------------------------------------
| Form             | Example       | Description                                                                 |
| ---------------- | ------------- | --------------------------------------------------------------------------- |
| **Prefix form**  | `++a` / `--a` | The value is increased or decreased **before** it is used in an expression. |
| **Postfix form** | `a++` / `a--` | The value is used **first**, and then incremented or decremented.           |
-----------------------------------------------------------------------------------------------------------------


Explanation with Example
-------------------------

Let’s take:   int a = 5;
-------------------------------------------------------------------------
| Expression | Action                    | Result                       |
| ---------- | ------------------------- | ---------------------------- |
| `++a`      | Increment first, then use | `a = 6`, value used = 6      |
| `a++`      | Use first, then increment | value used = 5, then `a = 6` |
| `--a`      | Decrement first, then use | `a = 4`, value used = 4      |
| `a--`      | Use first, then decrement | value used = 5, then `a = 4` |
-------------------------------------------------------------------------
*/

#include <stdio.h>
int main()
{
    int a = 5, b;

    printf("Initial value of a = %d\n", a);

    b = ++a;
    printf("After prefix increment (++a): a = %d, b = %d\n", a, b);

    b = a++;
    printf("After postfix increment (a++): a = %d, b = %d\n", a, b);

    b = --a;
    printf("After prefix decrement (--a): a = %d, b = %d\n", a, b);

    b = a--;
    printf("After postfix decrement (a--): a = %d, b = %d\n", a, b);

    return 0;
}


/*
Output:
-------
Initial value of a = 5
After prefix increment (++a): a = 6, b = 6
After postfix increment (a++): a = 7, b = 6
After prefix decrement (--a): a = 6, b = 6
After postfix decrement (a--): a = 5, b = 6
 */