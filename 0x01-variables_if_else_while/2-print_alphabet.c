#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 97;

	while (p < 123)
	{
	putchar(p);
	p++;
	}
	putchar('\n');
	return (0);
}
