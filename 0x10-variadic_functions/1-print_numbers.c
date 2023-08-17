#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - ...
  * @separator: ...
  * @n: ...
  *
  * Return: ...
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			_putchar(va_arg(args, int));

			if (i != n - 1  && separator != NULL)
				_putchar(separator);

			i++;
		}
		va_end(args);
	}
	_putchar("\n");
}
