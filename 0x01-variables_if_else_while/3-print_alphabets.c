#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchart(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchart(ch);
	putchart('\n');

	return (0);
}
