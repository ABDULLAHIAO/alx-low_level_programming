#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("The size of an int is: %zu byte(s)\n", sizeof(int));
	printf("The size of a short int is: %zu byte(s)\n", sizeof(short int));
	printf("The size of a long int is: %zu byte(s) \n", sizeof(long int));
	printf("The size of a long long int is: %zu byte(s)\n", sizeof(long long int));
	printf("The size of a char is: %zu byte(s)\n", sizeof(char));
	printf("The size of a signed integer is: %zu byte(s)\n", sizeof(signed int));
	printf("The size of an unsigned integer is: %zu byte(s)\n", sizeof(unsigned int));
	printf("The size of a double is: %zu byte(s)\n", sizeof(double));
	printf("The size of a float is: %zu byte(s)\n", sizeof(float));
	return (0);
}
