#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int van;

	van = 0;
	while (van < n)  /*Delacring WHILE*/
	{
		*(dest + van) = *(src + van); /*add 1 position dest and src*/
		van++;

	} /*END WHILE*/


	return (dest);
}
