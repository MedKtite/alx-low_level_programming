#include "variadic_functions.h"

/**
  * print_strings - print numbers using a seprator
  * @seprator: The string seprator
  * @n: The quantity of numbers
  * @...:The list of numbers
  *
  * Return: 0
  */
void print_strings(const char *seprator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *p;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		if (seprator != NULL && i != 0)
			printf("%s", seprator);
		p = va_arg(valist, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
	}
	printf("\n");
	va_end(valist);
}
