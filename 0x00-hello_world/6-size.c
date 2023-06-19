#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char c;
	long num1;
	long long num2;
	float num3;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(num));
	printf("Size of a long int: %zu byte(s)\n", sizeof(num1));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(num2));
	printf("Size of a float: %zu byte(s)\n", sizeof(num3));
	return (0);
}
