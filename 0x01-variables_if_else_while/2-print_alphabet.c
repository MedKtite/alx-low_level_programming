#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Description: Prints the lowercase alphabet followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
