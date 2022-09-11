#include <stdio.h>

/**
 * Description: main - prints all single digit numbers of base 10 starting
 * from 0, followed by a new line, using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char a;	

	for (a = 'z'; a >= 'a' ; a--) 
		putchar(a);
	putchar('\n');
	return(0);
}
