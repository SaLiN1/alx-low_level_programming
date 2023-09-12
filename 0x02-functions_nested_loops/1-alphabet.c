#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints all the lowercase letters of the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
