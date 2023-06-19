#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return: alawys 0 (success)
 */

int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '1';
		i++;
	}
	return (0);
}
