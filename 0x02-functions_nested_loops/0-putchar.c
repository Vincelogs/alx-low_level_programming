#include "main.h"

/**
 * main - entry point
 *
 * Description: Print _putchar with _putchar
 *
 * Return: always 0
 */

int main(void)
{
	int i = 0;
	char c;
	char r[] = "_putchar\n";

	while (i <= 8)
	{
		c = r[i];
		_putchar(c);
		i++;
	}
	return (0);
}
