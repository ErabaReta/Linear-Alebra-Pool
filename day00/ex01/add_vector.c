#include "../vector.h"

t_vec3 add_vector(t_vec3 v1, t_vec3 v2)
{
	t_vec3 v3;

	v3.x = v2.x + v1.x;
	v3.y = v2.y + v1.y;
	v3.z = v2.z + v1.z;
	return (v3);
}