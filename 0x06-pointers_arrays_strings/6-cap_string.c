/**
* cap_string - Capitalizes all words in a string.
* @s: Pointer to input string.
*
* Return: Pointer to the modified string.
*/
char *cap_string(char *s)
{
int i = 0;

/* iterate through the string */
while (s[i])
{
/* check for lowercase letters */
if (s[i] >= 'a' && s[i] <= 'z')
{
/* capitalize first letter */
if (i == 0 || s[i - 1] == ' ' ||
s[i - 1] == '\t' || s[i - 1] == '\n' ||
s[i - 1] == ',' || s[i - 1] == ';' ||
s[i - 1] == '.' || s[i - 1] == '!' ||
s[i - 1] == '?' || s[i - 1] == '"' ||
s[i - 1] == '(' || s[i - 1] == ')' ||
s[i - 1] == '{' || s[i - 1] == '|')
{
s[i] -= 32;
}
}
i++;
}

return (s);
}
