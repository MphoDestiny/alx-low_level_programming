#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return: alawys 0 (succes)
 */
void printCombinations(void)
{
	int i, j;
	for (i = 0 ; i < 9 ; i++)
	{
		for (j = i + 1; j < 10 ; j++)
		{
			putchar ('0' + i);
			putchar ('0' + j);
			if (i != 8 || j != 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
}
int main(void)
{
	printCombinations();
	return (0);
}
