#ifndef VECTOR_H
# define VECTOR_H

// #include <stdio.h>
// #include <math.h>
#include "../utils/utils.h"

typedef struct s_vec3
{
	float	x;
	float	y;
	float	z;
}	t_vec3;

// t_vec3 add_vector(t_vec3 v1, t_vec3 v2);
t_vec3 subtract_vector(t_vec3 v1, t_vec3 v2);
float vector_magnitude(t_vec3 vector);
#endif