#include <stdio.h>

/**
 * main -main function
 *
 * Return: rep 0
 */

int maim(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i ; j < 10 ; j++)
		{	
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + 'o');
					putchar(j + 'o');
					putchar(k + 'o');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
