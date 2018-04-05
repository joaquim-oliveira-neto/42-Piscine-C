int		nmatch(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (nmatch(s1, ++s2));
		else
			return (0);
	}
	if (*s2 == '*')
		return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
	if (*s1 == *s2)
		return (nmatch(++s1, ++s2));
	if (*s1 != *s2)
		return (0);
	return (-1);
}