#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n < 103)
	{
	if (n == 58)
	{
	n = 97;
	}
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
