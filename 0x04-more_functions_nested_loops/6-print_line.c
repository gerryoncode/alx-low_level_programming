#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Is an input
 * Return: None
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
