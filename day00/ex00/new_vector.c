#include "../vector.h"

t_vec3 new_vector(float x, float y, float z)
{
	t_vec3 vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;
	return (vector);
}