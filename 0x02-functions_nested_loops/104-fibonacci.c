#include <stdio.h>

/**
 *
 *Prints the first 98 numbers fo the fibonacci sequence
 *
 *return 0(success)
 */
int main(void)
{
	int sum = 1;

	for(int i=1; i<=98; i++)
	{
		printf("%d, ",sum);
		sum += i++;

	}
	printf("\n");
	return (0);
}
