#include "main.h"
/**
 * _isdigit - checks if a value is a digit from 0 to 9
 * @c: Input under test
 * Return: 1 if a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		return (1);
	} else
	{
		return (0);
	}
}
