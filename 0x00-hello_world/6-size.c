#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using Sizeof funtion to print the size of various types
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a int: %lu byte(s)\n", sizeof(int));
	printf("Size of a Long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a Long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
