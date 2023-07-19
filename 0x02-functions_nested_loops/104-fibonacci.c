#include <stdio.h>

/**
 *
 *Prints the first 98 numbers fo the fibonacci sequence
 *
 *return 0(success)
 */
int main(void)
{
	int sum = 0, a = 1, b = 2;

	for(int i=1; i<=98; i++)
	{
		if( i== 1 )
		{
			printf("%d, ",a);
		}
		if( i== 2 )
		{
			printf("%d, ",b);
		}
		sum = a+b;
		a=b;
		b=sum;
		printf("%d, ",sum);
	}
	printf("\n");
	return (0);
}
