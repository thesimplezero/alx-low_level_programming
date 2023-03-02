/**
 * _strcat - concatenates two strings.
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	/* find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* concatenate src to dest */
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
