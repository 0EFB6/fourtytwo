char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	char	*src;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		ptr = str;
		src = to_find;
		while (*src && *ptr == *src)
		{
			src++;
			ptr++;
		}
		if (!*src)
			return (str);
		str++;
	}
	return (0);
}
