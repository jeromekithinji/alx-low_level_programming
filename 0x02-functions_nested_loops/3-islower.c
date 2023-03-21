#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @ch: The character to be checked
 * Return: Return 1 for lowercase or 0 for anything else
 */

int _isLower(int ch)
{
if (ch >= 97 && ch <= 122)
return (1);
else
return (0);
}
