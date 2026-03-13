int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32)
		{
			++count;
		}
		++i;
	}
	return (count);
}