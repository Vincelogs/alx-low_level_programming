#include "main.h"
/**
 * get_bit - function to get bit at index
 * @n: unsigned long int type
 * @index: unsigned int type
 *
 * Return: always successful
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check =  1;
	unsigned int size = sizeof(n) * 8;

	if (index > size)
		return (-1);
	check <<= index;
	if (check &  n)
		return (1);
	else
		return (0);
}
