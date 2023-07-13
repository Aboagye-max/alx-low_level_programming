#include <stdio.h>

int main()
{
	char c;
	int i;
	double d;
	printf("The size of int is:%lu.\n",(unsigned long)sizeof(i));
	printf("The size of double is:%lu.\n",(unsigned long)sizeof(d));
	printf("The size of char is:%lu.\n",(unsigned long)sizeof(c));
	return 0;
}
