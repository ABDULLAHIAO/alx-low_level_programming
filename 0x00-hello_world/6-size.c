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
	printf("The size of an int is: %zu byte(s)\n", sizeof(int));
	printf("The size of an int in a 8-bit manchine: %lu byte(s)\n", sizeof( int8_t ));
	printf("The size of a signed integer in a 16-bit manchine is: %lu byte(s)\n", sizeof( int16_t ));
	printf("The size of an unsigned int in a 32-bit manchine is: %zu byte(s)\n", sizeof(uint32_t));
	printf("The size of an unsigned int in a 64-bit manchine is: %lu byte(s)\n", sizeof(uint64_t));
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
