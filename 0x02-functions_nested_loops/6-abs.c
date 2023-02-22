#include "main.h"

/**
 * _abs - check for absolute value
 *
 * @k: parameter
 *
 * Return: represents k
 */

int _abs(int k)
{
	if (k < 0)
		k = -(-k);
        else if (k >= 0)
                k = k;
        return (k);
}
