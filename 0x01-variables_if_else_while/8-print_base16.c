#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	int i;
	int j;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		i++;
	}

	j = 'a';
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
