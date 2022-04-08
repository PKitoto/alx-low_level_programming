#include <stdio.h>

/**
 * main - initialize the code
 *
 * Return: zero means successful
 */
int main(void)
{
	int l = 48;
	int m = 49;
	int c = 49;

	while (l < 58)
	{
	while (m < 58)
	{
	putchar(l);
	putchar(m);
	if ((l != 56) || (m != 57))
	{
	putchar(44);
	putchar(32);
	}
	m++;
	}
	c++;
	m = c;
	l++;
	}
	putchar('\n');
	return (0);
}
