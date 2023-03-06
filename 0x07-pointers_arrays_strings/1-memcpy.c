/**
 * _memcpy - function that copies n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the destination buffer
 * @src: pointer to the source buffer
 * @n: number of bytes to copy from @src to @dest
 *
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++) 
        dest[i] = src[i]; 
    return (dest);
}
