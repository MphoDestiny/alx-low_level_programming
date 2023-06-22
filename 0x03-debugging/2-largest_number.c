#include "main.h"

/**
 * largets_number - returns the largest of 3 numbers
 * @a: first interger
 * @b: second interger
 * @c: third interger
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}
	if (c > largest)
	{
		largest = c;
	}

	return (largest);
}
