/*
Relational Operators:-
--------------------------------------------------------------
| Operator | Description              | Example  | Result    |
| -------- | ------------------------ | -------- | --------- |
| `==`     | Equal to                 | `a == b` | 0 (false) |
| `!=`     | Not equal to             | `a != b` | 1 (true)  |
| `>`      | Greater than             | `a > b`  | 1 (true)  |
| `<`      | Less than                | `a < b`  | 0 (false) |
| `>=`     | Greater than or equal to | `a >= b` | 1         |
| `<=`     | Less than or equal to    | `a <= b` | 0         |
--------------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d < %d : %d\n", a, b, a < b);
    return 0;
}
