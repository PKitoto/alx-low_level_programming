#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);
}
