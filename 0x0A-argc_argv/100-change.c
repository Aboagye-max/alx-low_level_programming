#include "main.h"
#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[])
{
	int i, cent = atoi(argv[1]), result, cents[] = {25,10,5,2,1};
	
	if(argc > 2)
	{
		if(cent < 0)
		{
			printf("0\n");
		}else{
			for(i = 0; i < sizeof(cents); i++)
			{
				result = cent % cents[i];
				if(result == 0)
				{
					printf("%d",result);
					break;
				}
			}
		}
	}else{
		printf("Error\n");
		return(1);
	}
}c
