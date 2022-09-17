#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * followed by a new line
 */
void print_numbers(void)
{
int b;
for (b = 0; b <= 9; b++)
{
_putchar('0' + b);
}
_putchar('\n');
}
