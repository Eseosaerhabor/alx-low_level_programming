#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 * Return:Always 0 Success
 */
void print_alphabet(void)
{
	int j;
	
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('/n');
}
