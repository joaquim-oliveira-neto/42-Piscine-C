int		nmatch(char *s1, char *s2)
{
	if (s1[0] == '\0' && s2[0] == '\0')
		return (1);
	else if (s1[0] == s2[0] && s2[0] != '*')
		return (nmatch(&s1[1], &s2[1]));
	else if (s1[0] == '*' && s2[0] == '*')
		return (nmatch(&s1[1], &s2[0]));
	else if (s1[0] == '\0' && s2[0] == '*')
		return (nmatch(&s1[0], &s2[1]));
	else if (s2[0] == '*' && s1[0] != '\0')
		return (nmatch(&s1[0], &s2[1]) + nmatch(&s1[1], &s2[0]));
	return (0);
}

