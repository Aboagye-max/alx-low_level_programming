#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * main - Prints the file name of the program
  *
  * Return: Always zero
  */
int main(void)
{
	_putchar(__FILE__);
	return (0);
}
