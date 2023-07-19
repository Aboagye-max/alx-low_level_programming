#include "unistd.h";
/**
 *_putchar takes in a char anr returns an integer variable
 *
 * Return: Always the zero ( success )
 */

int _putchar(char c)
{
	write(1,&c,1)
	return (0);
}
