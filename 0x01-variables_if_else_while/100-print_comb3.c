#include <stdio.h>

/**
 * main - initialize the code
 *
 * Return: zero means successful
 */
int main(void)
{
	int n = 48;
	int m = 49;
	int c = 49;

	while (n < 58)
	{
	while (m < 58)
	{
	putchar(n);
	putchar(m);
	if ((n != 56) || (m != 57))
	{
	putchar(44);
	putchar(32);
	}
	m++;
	}
	c++;
	m = c;
	n++;
	}
	putchar('\n');
	return (0);
}
