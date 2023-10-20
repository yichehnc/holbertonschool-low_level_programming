#include "main.h"

/**
 * _isalpha - checks for alphabetic characters.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        {
                return (1);
        }
        else
        {
                retrun (0);
        }
}
