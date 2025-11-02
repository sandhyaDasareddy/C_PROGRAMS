/*
Program: Display Weekday Name Using Weekday Number (Switch Case)
-----------------------------------------------------------------

About Switch Case:
------------------
→ The switch statement is used to execute one block of code among many options.
→ It compares the value of an expression (like a number) with different case labels.

Logic:
------
1. Read a weekday number from the user (1–7).
2. Use switch case to match the number:
      1 → Sunday
      2 → Monday
      3 → Tuesday
      4 → Wednesday
      5 → Thursday
      6 → Friday
      7 → Saturday
3. Display the corresponding weekday.
4. If the number is not between 1–7, display an invalid message.
*/

#include <stdio.h>

int main()
{
    int day;

    // Step 1: Ask user for weekday number
    printf("Enter weekday number (1 to 7): ");
    scanf("%d", &day);

    // Step 2: Use switch to determine weekday name
    switch (day)
    {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid weekday number! Please enter between 1 and 7.\n");
    }

    // Step 3: Thank you message
    printf("Thank you for checking the weekday.\n");

    return 0;
}

/*
Sample Output:
--------------
Enter weekday number (1 to 7): 3
Tuesday
Thank you for checking the weekday.
*/
