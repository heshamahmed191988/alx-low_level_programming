#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = '0';
	while
		(d < '10') {
			putchar(d+10);
			d++;
		}
	while
		(c <= 'a') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
