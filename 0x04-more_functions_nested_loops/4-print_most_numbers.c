#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  *
  * Description: Prints the numbers excluding 2 and 4
  *
  * Return: The numbers since 0 up to 9
  */
void print_most_numbers(void)
{
	for (int x = 0; x < 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x);
		}
	}

	_putchar('\n');
}
