#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 *Description:prints the lower case letters of the english alphabets from a - z
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
