#include "main.h"
/**
 * Description: print_alphabet_x10 - prints 10 times the alphabet,
 * in a lowercase, followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
