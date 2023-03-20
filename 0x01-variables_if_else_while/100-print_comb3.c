#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j = 0;

    while (i < 10)
    {
        j = i + 1;
        while (j < 10)
        {
            if (i != j)
            {
                putchar(i + '0');
                putchar(j + '0');
                if (i < 8)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return (0);
}
