/**
 * _strcpy - Copies a string from source pointer to destination pointer.
 *           Includes the terminating null byte (\0).
 *
 * @src: Source string parameter.
 * @dest: Destination string parameter.
 *
 * Return: Pointer to destination input parameter.
 */
char *_strcpy(char *dest, char *src)
{
		int i, j = 0;

		for (i = 0; src[i] != '\0'; ++i)
		{
			dest[j] = src[i];
			++j;
		}

		dest[j] = '\0';

		return (dest);
}
