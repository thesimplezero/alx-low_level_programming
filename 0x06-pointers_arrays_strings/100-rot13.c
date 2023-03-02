/**
* rot13 - Encodes a string using rot13 encryption
* @str: The string to be encoded
*
* Return: Pointer to the encoded string
*/
char *rot13(char *str)
{
int i, j;
char *ret = str;
char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i]; i++)
{
for (j = 0; input[j]; j++)
{
if (str[i] == input[j])
{
str[i] = output[j];
break;
}
}
}

return (ret);
}
