#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
