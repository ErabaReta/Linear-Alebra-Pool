#include "../vector.h"

t_vec3 cross_product(t_vec3 v1, t_vec3 v2)
{
	t_vec3 vector;

	vector.x = v1.y * v2.z - v1.z * v2.y;
	vector.y = v1.z * v2.x - v1.x * v2.z;
	vector.z = v1.x * v2.y - v1.y * v2.x;
	return (vector);
}