#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	when(num < 10)
	{
		printf("%c\n", num);
		++num;
	}

	return (0);
}
