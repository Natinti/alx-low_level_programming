#include "main.h"

/**
 * cap_string - This function capitalizes all owrds of a string
 * @str: The string that is to be capitalized
 *
 * Return: Pointer to the changed string
 */

char *cap_string(char *)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == '' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ','  ||
				str[index - 1] == ';'  ||
				str[index - 1] == '.'  ||
				str[index - 1] == '!'  ||
				str[index - 1] == '?'  ||
				str[index - 1] == '"' ||
				str[index - 1] == '('  ||
				str[index - 1] == ')'  ||
				str[index - 1] == '{'  ||
				str[index - 1] == '}'  ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);

}

