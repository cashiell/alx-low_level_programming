#include "main.h"
/**
 * _isalpha - evaluate alphabetic character
 * @c: variable to check
 *
 * Return: results
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
