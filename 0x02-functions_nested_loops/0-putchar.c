#include "main.h"
#include <string.h>

/**
 * main - prints _putchar to standard output
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *str = "_putchar";
	unsigned long int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
