#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
    int i, j, result;

    _putchar('0');
    _putchar('\n'); // Print the first line (0 times 9)
    
    for (i = 1; i <= 9; i++) {
        for (j = 0; j <= 9; j++) {
            result = i * j;
            if (result <= 9) {
                if (j > 0) {
                    _putchar(' ');
                }
                _putchar(result + '0');
            } else {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }
            if (j < 9) {
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n'); // Print a newline after each row
    }
}
