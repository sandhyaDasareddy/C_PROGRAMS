/*
Bitwise Operators:-
------------------

Definition:- Bitwise operators are used to perform operations on bits (0s and 1s) of integer values.
They directly work on the binary representation of numbers rather than on their decimal or character values.

=> These operators are mainly used in low-level programming, microcontrollers, and hardware-level coding.

List of Bitwise Operators:-
----------------------------------------------------------------------------------------------------------------------------------
| Operator | Name        | Description                                 | Example (if a=5, b=3)                  | Result |    |   |
| -------- | ----------- | ------------------------------------------- | -------------------------------------- | ------ | -- | - |
| `&`      | Bitwise AND | Sets each bit to 1 if **both** bits are 1   | `a & b`                                | 1      |    |   |
| `        | `           | Bitwise OR                                  | Sets each bit to 1 if **any** bit is 1 | `a     | b` | 7 |
| `^`      | Bitwise XOR | Sets each bit to 1 if **only one** bit is 1 | `a ^ b`                                | 6      |    |   |
| `~`      | Bitwise NOT | Inverts all bits (1→0, 0→1)                 | `~a`                                   | -6     |    |   |
| `<<`     | Left Shift  | Shifts bits to the left by n positions      | `a << 1`                               | 10     |    |   |
| `>>`     | Right Shift | Shifts bits to the right by n positions     | `a >> 1`                               | 2      |    |   |
-----------------------------------------------------------------------------------------------------------------------------------


Binary Representation Example

Let’s take:
a = 5 → 0101 (in binary)
b = 3 → 0011 (in binary)


Explanation of Each Operator
----------------------------

1. Bitwise AND (&)
------------------
Result bit = 1 only if both bits are 1
Example:

0101
&0011
-----
0001 → 1


2. Bitwise OR (|)
-----------------
Result bit = 1 if any bit is 1

0101
|0011
-----
0111 → 7


3. Bitwise XOR (^)
------------------
Result bit = 1 only if bits are different

0101
^0011
-----
0110 → 6


4. Bitwise NOT (~)
-------------------
Inverts each bit: 1 → 0 and 0 → 1

a = 5 → 0101  
~a → 1010 → -6


5. Left Shift (<<)
-------------------
Shifts all bits to the left and fills right bits with 0.

Effectively multiplies the number by 2 for each shift.
Example: a << 1 → 5 * 2 = 10

6. Right Shift (>>)
--------------------
Shifts bits to the right and fills left bits with 0 (for positive numbers).

Effectively divides the number by 2 for each shift.
Example: a >> 1 → 5 / 2 = 2


Now applying operators:
-----------------------------------------------------------
| Operation | Binary Result | Decimal Result              |
| --------- | ------------- | --------------------------- |
| a & b     | 0001          | 1                           |
| a | b     | 0111          | 7                           |
| a ^ b     | 0110          | 6                           |
| ~a        | 1010          | -6 (in 2’s complement form) |
| a << 1    | 1010          | 10                          |
| a >> 1    | 0010          | 2                           |
-----------------------------------------------------------
*/
#include <stdio.h>
int main()
{
    int a = 5, b = 3;

    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    return 0;
}

/*
Output:-
-------
a = 5, b = 3
a & b = 1
a | b = 7
a ^ b = 6
~a = -6
a << 1 = 10
a >> 1 = 2
*/
