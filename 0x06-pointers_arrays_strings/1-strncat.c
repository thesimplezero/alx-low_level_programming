/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination array
 * @src: pointer to the source string
 * @n: maximum number of bytes to be appended
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
	int dest_len = 0, i;

	/* Find the length of dest string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append at most n bytes from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0'; /* Append null byte to dest string */

	return dest;
}
