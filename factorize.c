#include "factor.h"

/**
 * factorize - function factorizes a number
 * @buffer: pointer to the address of the number
 *
 * author: kiprotich
 * returns: always 0
 */
int factorize(char *buffer)
{
	u_int32_t num;
        u_int32_t i;

	num = atoi(buffer);

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num/i,i);
		}
	}	
	return (0);
}
