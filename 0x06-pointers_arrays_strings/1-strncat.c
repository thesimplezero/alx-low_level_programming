/**
* _strncat - concatenate two strings
* @dest: pointer to the string that will be concatenated with the src string
* @src: pointer to the string that will be appended to dest
* @n: maximum number of characters to be appended from src
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, const char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;

for (j = 0; src[j] != '\0' && j < n; j++)
dest[i + j] = src[j];

dest[i + j] = '\0';

return (dest);
}
