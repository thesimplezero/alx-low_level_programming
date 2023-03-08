/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise returns 0. The second string can contain the special
 * character '*', which can replace any string (including an empty string).
 *
 * @s1: first string
 * @s2: second string (may contain '*')
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	/* if both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* if the current character of s2 is '*', move to next character */
	if (*s2 == '*')
	{
		/* check all possible matches from s1 after '*' */
		while (*(s1 + 1) != '\0')
		{
			/* recursively check all possible matches from s1 */
			if (wildcmp(s1 + 1, s2 + 1))
				return (1);
			s1++;
		}

		/* check if s2 ends with '*' */
		return (*(s2 + 1) == '\0');
	}

	/* if the current characters of both strings match, continue */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* if the current characters do not match and s2 does not contain '*', return 0 */
	return (*s2 != '\0' ? 0 : 0);
}
