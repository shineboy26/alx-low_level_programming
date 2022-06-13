_putchar.c
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
