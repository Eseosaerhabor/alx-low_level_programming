#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 10;

	while (i < 10)
	{
		c = 'a';
		while ( <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
