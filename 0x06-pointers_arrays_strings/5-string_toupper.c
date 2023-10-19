#include "main.h"

/**
 * string_toupper - Change all lowercase letters in a string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr -= 32;
	}
	ptr++;
	}
	return (str);
}
