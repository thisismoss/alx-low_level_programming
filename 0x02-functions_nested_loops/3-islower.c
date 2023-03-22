#include "main.h"

/**
 *_islower - function that checks if
 * character is lowercase
 *
 * @c: checks input of function
 *
 * Return: return 1 if 'c' is lowercase
 * Return 0 otherwise (success)
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)
return (1);		/*returns 1 if 'c' is lowercase*/
return (0);
}
