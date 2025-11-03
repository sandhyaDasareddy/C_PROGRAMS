/*
Write a C program to read the name “SBTET AP MANGALAGIRI” in three parts using scanf() statement and display the same in the following formats using printf() statement.

Formats:
(a) SBTET. AP. MANGALAGIRI
(b) SBTET AP MANGALAGIRI
(c) SBTETAP MANGALAGIRI
(d) SBTET.AP

Logic:

Input three words using scanf() — for example:

First word → SBTET

Second word → AP

Third word → MANGALAGIRI

Use printf() to print the name in different formats as shown.

Make sure to use string placeholders %s to print each part.

*/
#include <stdio.h>

int main()
{
    char part1[20], part2[20], part3[20];

    // Logic:
    // Step 1: Read three words separately
    printf("Enter the name in three parts (e.g., SBTET AP MANGALAGIRI): ");
    scanf("%s %s %s", part1, part2, part3);

    // Step 2: Display in required formats
    printf("\n(a) %s. %s. %s\n", part1, part2, part3);
    printf("(b) %s %s %s\n", part1, part2, part3);
    printf("(c) %s%s %s\n", part1, part2, part3);
    printf("(d) %s.%s\n", part1, part2);

    return 0;
}

/*
Output:-
-------
Enter the name in three parts (e.g., SBTET AP MANGALAGIRI): SBTET AP MANGAL
AGIRI

(a) SBTET. AP. MANGALAGIRI
(b) SBTET AP MANGALAGIRI
(c) SBTETAP MANGALAGIRI
(d) SBTET.AP
*/