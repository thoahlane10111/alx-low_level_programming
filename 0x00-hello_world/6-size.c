#include <stdio.h>


/**
 * main prints - size of various types
 * Return: Always 0. (Success)
 */
int main(void)
{
	printf("size of a char: %zd byte(s)\n", sizeof(char));
	printf("size of a char: %zd byte(s)\n", sizeof(int));
	printf("size of a long int: %zd byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zd byte(s)\n", sizeof(long long int));
	printf("size of a float: %zd byte(s)\n", sizeof(float));
	return (0);
}

