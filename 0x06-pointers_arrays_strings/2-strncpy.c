/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 *
 * Description: Copies up to n characters from the src string to the dest
 * string, including the null byte. If the length of src is less than n, the
 * remainder of dest will be filled with null bytes.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, const char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];
        for (; i < n; i++)
                dest[i] = '\0';

        return (dest);
}
