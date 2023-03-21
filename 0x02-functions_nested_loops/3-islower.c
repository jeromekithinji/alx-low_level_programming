#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @ch: The character to be checked
 * Return: Return 1 for lowercase or 0 for anything else
 */
int _isLower(char ch)
{
if (ch >= 'a' && ch <= 'z')
return (1);
else
return (0);
}
