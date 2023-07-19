#include "unistd.h";
/**
 *_putchar takes in a char anr returns an integer variable
 *
 * Return: Always the zero ( success )
 */

char _putchar(char c)
{
	return(write(1,&c,1));
}
