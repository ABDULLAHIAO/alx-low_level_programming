#include <stdio.h>

/**
 * main - Entry point of the program
 * return - program returns 0 always
 * printf - delivers message to the standard output
 */

int main(void)
{
	printf("The size of an int is: %ld.\n", sizeof(int));
	printf("The size of a short int is: %li.\n", sizeof(short int));
	printf("The size of a long int is: %lu.\n", size_tof(long int));
	printf("The size of a char is: %lu.\n", sizeof(char));
	printf("The size of a signed integer is: %lu.\n", sizeof(signed int));
	printf("The size of an unsigned integer is: %lu.\n", sizeof(unsigned int));
	printf("The size of a double is: %lu.\n", sizeof(double));
	printf("The size of a float is: %lu.\n", sizeof(float));
	return (0);
}
