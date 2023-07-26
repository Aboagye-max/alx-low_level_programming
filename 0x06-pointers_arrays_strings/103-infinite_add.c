#include "main.h"

/**
 * infinte_add - adds two numbers
 *
 * Return: 0 if result is grater than buffer size else return the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r = n1 + n2;

	if ( r > size_r )
	{
		return (0);
	}else {
		return (*r);
	}
}
