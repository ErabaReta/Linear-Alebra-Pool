#include "../vector.h"

t_vec3 vector_normalize(t_vec3 vector)
{
	float magnitude = vector_magnitude(vector);
	vector.x = vector.x / magnitude;
	vector.y = vector.y / magnitude;
	vector.z = vector.z / magnitude;
	return (vector);
}
