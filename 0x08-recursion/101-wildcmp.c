/**
* wildcmp - compares two strings and returns 1 if they can be considered
* identical, otherwise returns 0. s2 can contain the special character *,
* which can replace any string (including an empty string).
*
* @s1: the first string to compare
* @s2: the second string to compare
*
* Return: 1 if s1 and s2 can be considered identical, otherwise 0.
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*') /* special case: * can match anything */
{
if (*(s2 + 1) == '\0') /* if * is the last character, it matches */
return (1);
if (*s1 == '\0') /* if s1 is empty, s2 must consist of * only */
return (wildcmp(s1, s2 + 1));
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
/* * matches s1[0] or * matches nothing */
}
if (*s1 == '\0' || *s2 == '\0') /* base case: end of string reached */
return (*s1 == *s2);
if (*s1 != *s2) /* characters don't match */
return (0);
return (wildcmp(s1 + 1, s2 + 1)); /* compare next characters */
}
