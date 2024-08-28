float	ft_pow(float n, int power)
{
	int	i = 0;
	float result = 1;

	if (power <= 0)
		return (1);
	while (i < power)
	{
		result *= n;
		i++;
	}
	return (result);
}
