/**
 * _strncat - function that concatenates two strings
 *            but only uses n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of dest */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append the first n bytes of src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/* Add null terminator to the end of dest */
	dest[i + j] = '\0';

	return dest;
}
