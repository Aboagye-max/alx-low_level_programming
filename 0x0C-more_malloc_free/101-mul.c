#include <stdio.h>
#include <stdlib.h>

/**
  * main - Multiplies two positive integers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
        if(argc > 3)
        {
                printf("Error\n");
                exit(98);
        }else{
                int i;
                int mul = 1;
                for( i = 1; i < argc; i++ )
                {
                        int v = strtol(argv[i], NULL , 10);
                        mul = mul * v;
                }
                printf("%d\n", mul);
        }
        return (0);
}
