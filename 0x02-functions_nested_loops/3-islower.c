#include "main.h"

/**
 * a function that checks for lowercase
 *
 * _islower: function to check if character is lowercase
 *
 * @c: checks input of function
 *
 * return: return 1 if 'c' is lower otherwise always 0 (success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
