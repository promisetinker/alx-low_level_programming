#include "main.h"

/**
 * print_last_digit - will print lasy digit
 *
 * @i: parameter
 *
 * Return: represent r
 */


int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (i < 0)
		r = -r;
	return (r);
}
