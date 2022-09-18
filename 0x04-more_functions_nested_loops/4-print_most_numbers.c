#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9
 * Do not print 2 and 4
 * followed by a new line
 * Return: 0
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar('0' + a);
}
}
_putchar('\n');
}
