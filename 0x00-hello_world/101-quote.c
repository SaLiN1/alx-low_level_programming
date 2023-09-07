#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a goute using write fonction
 *	write(int fd.cnst void *buf.size_t count)
 *
 * Return: 1 (fail)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
