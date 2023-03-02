#include <stddef.h>
/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to be copied
 *
 * Description: Copies at most n bytes from the source string into
 *              the destination buffer. If the source string is shorter
 *              than n bytes, the remaining bytes are filled with null
 *              bytes.
 *
 * Return: Pointer to destination buffer.
 */
char *_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }

    return dest;
}
