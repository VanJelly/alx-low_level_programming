#include "main.h"
/**
 *_memset -This fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set the memory
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int van;

	/*Delacring FOR LOOP*/
	for (van = 0; van < n; van++)
	{
		*(s + van) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
