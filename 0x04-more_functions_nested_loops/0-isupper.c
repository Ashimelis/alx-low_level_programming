#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	for (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
