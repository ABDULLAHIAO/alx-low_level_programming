#include <stdio.h>

/**
 * main - Entry point of the program
 * main() - program's entry point
 * void - return value of the main function
 * return - program returns 0 always
 * printf - delivers message to the standard output
 */

int main(void)
{
	printf("The size of an int is: %zu.\n", sizeof(int));
	printf("The size of an int in a 8-bit manchine: %lu.\n", sizeof( int8_t ));
	printf("The size of a signed integer in a 16-bit manchine is: %lu.\n", sizeof( int16_t ));
	printf("The size of an unsigned int in a 32-bit manchine is: %zu.\n", sizeof(uint32_t));
	printf("The size of an unsigned int in a 64-bit manchine is: %lu.\n", sizeof(uint64_t));
	printf("The size of a short int is: %zu.\n", sizeof(short int));
	printf("The size of a long int is: %zu.\n", sizeof(long int));
	printf("The size of a char is: %zu.\n", sizeof(char));
	printf("The size of a signed integer is: %zu.\n", sizeof(signed int));
	printf("The size of an unsigned integer is: %zu.\n", sizeof(unsigned int));
	printf("The size of a double is: %zu.\n", sizeof(double));
	printf("The size of a float is: %zu.\n", sizeof(float));
	return (0);
}
