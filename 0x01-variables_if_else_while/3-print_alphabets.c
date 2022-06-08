#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar("alpha");
		++alpha;
	}

	for (alpha = 'A'; alpha <= 'Z'; ++alpha)
	{
		putchar("alpha");
	}

	putchar('\n');

	return (0);
}
