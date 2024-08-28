static float	get_nearest(int nb)
{	
	long	i;
	long	odd;
	int		count;

	i = 1;
	odd = 1;
	count = 1;
	while (i <= nb)
	{
		if (i == nb)
			return (count);
		odd += 2;
		i += odd;
		count++;
	}
	return (count - 1);
}

static float	approximate(float nearest, float nbr)
{
	// return ((nbr - ft_pow(nearest, 2)) / (2 * nearest));
	return (0.5 * (nearest + (nbr / nearest)));
}

float	ft_sqrt(float nbr)
{
	float nearest;
	int i = 0;

	if (nbr <= 0)
		return (0);
	nearest = get_nearest(nbr);
	// printf("first value => %f\n", nearest);
	while (ft_abs(ft_pow(nearest, 2) - nbr) >= 0.00001 && i < 50)
	{
		if (nearest == approximate(nearest, nbr))
			break ;
		nearest = approximate(nearest, nbr);
		// printf("after approximation=> %f\n", nearest);
		i++;
	}
	return nearest;
}

