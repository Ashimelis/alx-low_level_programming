#include <stdio.h>
/**
 * main - print out size of data type in c
 * Return: Always 0 (successful)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float e;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of long int: %zu byte(s)\n", sizeof(c));
	printf("Size of long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of float: %zu byte(s)\n", sizeof(e));
	return (0);
}
