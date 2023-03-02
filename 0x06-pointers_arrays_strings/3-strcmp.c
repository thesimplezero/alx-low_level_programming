/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: integer value indicating the difference between the two strings
 */
int _strcmp(char *s1, char *s2)
{
        int i = 0;

        while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
        {
                if (*(s1 + i) != *(s2 + i))
                        return (*(s1 + i) - *(s2 + i));
                i++;
        }

        return (*(s1 + i) - *(s2 + i));
}
