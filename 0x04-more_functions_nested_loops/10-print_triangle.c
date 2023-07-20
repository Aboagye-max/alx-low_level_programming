#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
        int size = 20, b;

        for( int i=0; i < size; i++ )
        {
                for( b = 2*(size - i); b >= 0; b-- )
                {
                        _printchar(" ");
                }


                for ( b = 0; b <= i; b++ )
                {
                        _printchar("# ");
                }
                _printchar("\n");
        }

        return (0);
}
