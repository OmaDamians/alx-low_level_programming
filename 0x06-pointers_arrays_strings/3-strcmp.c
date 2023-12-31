#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s1: first string parameter
 * @s2: second string parameter
 *
 * Description:
 *     This function compares two strings, @s1 and @s2, lexicographically.
 *
 * Return:
 *  returns 0 if s1 == s2
 *	returns negative number if s1 < s2
 *	returns positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
