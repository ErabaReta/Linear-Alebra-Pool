#include "../vector.h"
//== utils functions =============================

float	ft_sqrt(float nbr); 
float	ft_pow(float n, int power);
//================================================
/* you can find these functions in utils folder in the root of repo */
/* or remove ft_ and use the math.h library */


float vector_magnitude(t_vec3 vector)
{
	return (ft_sqrt(ft_pow(vector.x, 2)
				+ ft_pow(vector.y, 2)
				+ ft_pow(vector.z, 2)));
}

