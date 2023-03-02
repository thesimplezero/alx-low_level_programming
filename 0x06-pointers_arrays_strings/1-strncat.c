#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: string to which src string is concatenated
 * @src: string that is concatenated to dest string
 *
 * Return: Pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
        char *temp = dest;

        while (*temp != '\0')
        {
                temp++;
        }

        while (*src != '\0')
        {
                *temp = *src;
                temp++;
                src++;
        }

        *temp = '\0';

        return dest;
}
