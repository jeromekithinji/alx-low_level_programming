#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: The character to be checked
 * Return: Return 1 for lowercase or 0 for anything else
 */

int _isLower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
