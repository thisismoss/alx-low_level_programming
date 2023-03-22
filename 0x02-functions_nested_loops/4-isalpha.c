#include "main.h"

/**
 * _isalpha - function that checks if
 * character is lowercase or uppercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lowercase or uppercase
 * Retuen 0 otherwise always (success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	return (1);  /*returns 1 if 'c' is lowercase*/
	if (c >= 65 && c <= 90)
	return (1);
	return (0);
}
