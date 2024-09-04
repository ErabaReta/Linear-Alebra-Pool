#include "../vector.h"

float dot_product(t_vec3 v1, t_vec3 v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}
float vector_magnitude(t_vec3 vector)
{
	return (ft_sqrt(ft_pow(vector.x, 2)
				+ ft_pow(vector.y, 2)
				+ ft_pow(vector.z, 2)));
}
//===========================================================


int	is_coverd(t_vec3 place, t_vec3 camera, t_vec3 direction)
{
	t_vec3 v2 = subtract_vector(camera, place);

	float cos_θ = 0;

	if ( vector_magnitude(direction) * vector_magnitude(v2) != 0)
		cos_θ = dot_product(direction, v2) / ( vector_magnitude(direction) * vector_magnitude(v2));
	printf("cos ==> %f\n", cos_θ);
	if (cos_θ > 0.86602540378)
	{
		return (1);
	}
	return (0);
}

int	covered_places(t_vec3 *places,int n_places, t_vec3 camera, t_vec3 direction)
{
	int i = 0;
	int count = 0;
	while (i < n_places)
	{
		if (is_coverd(places[i], camera, direction))
		{
			count++;
		}
		i++;
	}
	return (count);
}

t_vec3 best_position(t_vec3 *places, int n_places, t_vec3 *cameras, int n_cameras, t_vec3 direction)
{
	int	i = 0;
	int best_camera;
	int max_counted = -1;

	while (i < n_cameras)
	{
		printf("==== camera[%d] => coverd %d cameras\n", i, covered_places(places, n_places, cameras[i], direction));
		if (max_counted < covered_places(places, n_places, cameras[i], direction))
		{
			max_counted = covered_places(places, n_places, cameras[i], direction);
			best_camera = i;
		}
		i++;
	}
	return (cameras[best_camera]);
}