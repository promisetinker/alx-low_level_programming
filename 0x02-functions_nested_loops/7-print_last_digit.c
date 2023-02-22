#include "main.h"

/**
 * print_last_digit - will print lasy digit
 *
 * @i: parameter
 *
 * Return: represent t
 */


int print_last_digit(int i)
{
	int t;

	t = i % 10;
	if (i < 0)
		t = -t;
	return (t);
}
