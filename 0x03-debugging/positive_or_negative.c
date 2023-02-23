#include "main.h"
/**
 * positive_or_negative - will always check for positive or negative numbers
 *
 * @i: number to check for
 *
 * Return: represents 0
 */

void positive_or_negative(int i)
{
	if  (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
