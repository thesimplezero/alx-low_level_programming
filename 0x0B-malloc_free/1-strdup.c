#include <stdlib.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: the string to duplicate
 *
 * Return: pointer to new string or NULL if failed
 */
char *_strdup(char *str)
{
	int length = 0, i;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
