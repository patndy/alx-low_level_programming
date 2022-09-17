#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9
 * Do not print 2 and 4
 * followed by a new line
 * Return: 0
 */
void print_most_numbers(void)
{
int b;
for (b = '0'; b <= '9'; b++)
{
if (b != '2' && b != '4')
_putchar(i);
}
_putchar('\n');
}
