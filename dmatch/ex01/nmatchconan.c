int	nmatch(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (nmatch(s1, s2 + 1));
		if (*(s2 + 1) == '\0')
			return (1);
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	}
	else
	{
		if (*s1 == '\0' || *s2 == '\0')
			return ((*s1 == '\0' && *s2 == '\0') ? 1 : 0);
		return (*s2 == *s1 ? nmatch(s1 + 1, s2 + 1) : 0);
	}
}