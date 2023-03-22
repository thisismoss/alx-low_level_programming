include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 *
 * @n: checks input of function
 *
 * Return: return 1 if 'n' is greater than zero
 * else eturn 0 if 'n' is zero
 * -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
