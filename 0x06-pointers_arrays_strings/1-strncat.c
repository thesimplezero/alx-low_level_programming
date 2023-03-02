/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer to destination input.
 * @src: pointer to source input.
 * @n: maximum number of bytes to be used from src.
 *
 * Return: pointer to resulting string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, j;

        i = 0;
        while (dest[i])
                i++;

        for (j = 0; j < n && src[j]; j++)
                dest[i + j] = src[j];

        dest[i + j] = '\0';

        return (dest);
}
