#include <stdio.h>

int main() {
    char name[]       = "David";       // A string (array of characters)
    int age           = 17;           // An integer
    char university[] = "UKRIDA";     // A string (array of characters)
    float gpa         = 4.00;         // A floating-point number
    char grade        = 'A';          // A single character

    // Printing the status
    printf("Hello %s here your status\n", name);
    printf("Status:\n%s\n%d\n%s\n%.2f\n%c", name, age, university, gpa, grade);

    return 0;
}

/* Data Types in C (Quick Reference):
 * -----------------------------------
 * Before make a variables :
 * - Declare it
 * - Initialization it
 * - Or u can combine that 2 step
 * 
 * 1. char: 
 *    - Used for single characters or strings (arrays of characters).
 *    - Example: char grade = 'A'; or char name[] = "David";
 *
 * 2. int:
 *    - Used for integer (whole number) values.
 *    - Example: int age = 17;
 *
 * 3. float:
 *    - Used for floating-point (decimal) values with single precision.
 *    - Example: float gpa = 4.00;
 *
 * Additional Notes:
 * - Use %s for strings, %d for integers, %.2f for floats (with 2 decimal places), and %c for characters in printf().
 * 
 * Reference: 
 * - Documentation from "C Programming Language" by Kernighan and Ritchie
 * - Modern C tutorials and notes for efficient learning
*/
