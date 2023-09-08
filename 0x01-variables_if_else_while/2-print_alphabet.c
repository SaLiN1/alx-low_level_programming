#include <stdio.h>

/**
 * main - entry point
 *
 * Descreption: display the alphabet in lowercase, and then in uppercase
 *
 * Return: return 0 and exit the program
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
