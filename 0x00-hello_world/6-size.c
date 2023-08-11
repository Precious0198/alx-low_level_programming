#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main (void)
{
	printf("size of a char: %c\n byte(s)", sizeof(char));
	printf("size of int: %d\n byte(s)", sizeof(int));
	printf("size of long int: %ld byte(s)", sizeof(long int));
	printf("size of long long int: %zu byte(s)", sizeof(long long int));
	printf("size of float: %f byte(s)", sizeof(float));
	return 0;
}
