#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory1
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int van;

	/*Delacration of  FOR*/
	for (van = 0; van < n; van++)
	{
		*(s + i) = b; /*add one position  s*/

	} /*END FOR*/

	return (s);
}