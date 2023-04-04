#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to" there
 *@dest: content is to be copiedd
 *@src: Source of data to be copiedd
 *@n: bytes of the memoryy
 *Return: destt
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int van;

	van = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		van++;

	} /*END WHILE*/


	return (dest);
}
