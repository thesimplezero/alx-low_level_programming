/**
 * _strncpy - copies a string.
 * @dest: the destination buffer
 * @src: the source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
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
