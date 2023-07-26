#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  *
  * Return: char var
  */
char *string_toupper(char *)
{
	int a = 0;

	while (*[a])
	{
		if (*[a] >= 97 && *[a] <= 122)
		{
			*[a] -= 32;
		}

		a++;
	}

	return (*);
