#include <stdio.h>

/**
 * main - entry point
 *
 * Descreption: display alphabet reverse and lowercase
 *
 * Return: return 0 and exit the program
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
