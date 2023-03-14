#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
        unsigned int len1 = 0, len2 = 0, i, j;
        char *s;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";

        /* Find length of s1 and s2 */
        while (s1[len1])
                len1++;
        while (s2[len2])
                len2++;

        s = malloc((len1 + len2 + 1) * sizeof(char));
        if (s == NULL)
                return (NULL);

        /* Copy s1 to s */
        for (i = 0; s1[i]; i++)
                s[i] = s1[i];

        /* Copy s2 to s */
        for (j = 0; s2[j]; j++)
                s[i + j] = s2[j];

        s[i + j] = '\0';

        return (s);
}
