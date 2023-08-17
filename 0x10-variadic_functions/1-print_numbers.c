#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_numbers - prints numbers & new line at the end
  * @seprator: string
  * @n: numbers of elements
  * Return: void
  */
void print_numbers(const char *seprator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (seprator != NULL && i != (n - 1))
		{
			printf("%s", seprator);
		}
	}
	putchar('\n');
	va_end(ap);
}
