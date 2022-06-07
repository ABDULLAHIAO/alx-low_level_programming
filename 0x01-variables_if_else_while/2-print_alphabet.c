#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
	char Alphabets;

		/*printing lowercase alphabets using ASCII*/

		for (Alphabets = 97; Alphabets <= 122; Alphabets++)
		{
			putchar("%c\t\n", Alphabets);
		}
	}
}
