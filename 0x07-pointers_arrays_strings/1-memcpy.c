#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is put it
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int z = n;

	for (; v < z; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}
