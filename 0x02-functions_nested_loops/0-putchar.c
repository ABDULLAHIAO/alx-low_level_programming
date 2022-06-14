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
	
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
