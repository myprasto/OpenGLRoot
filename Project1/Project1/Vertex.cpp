#include <math.h>
#include <iostream>
#include "Vertex.h"

float Vertex::dot(Vertex& a, Vertex& b)
{
	float ret = a.x * b.x + a.y * b.y + a.z * b.z;
	return ret;
}

Vertex Vertex::cross(Vertex& a, Vertex& b)
{
	Vertex* ret = new Vertex::Vertex
	(
		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - a.y * b.x
	);
	return *ret;
}

Vertex Vertex::add(Vertex& a, Vertex& b)
{
	Vertex* ret = new Vertex::Vertex(a.x + b.x, a.y + b.y, a.z + b.z);
	return *ret;
}

Vertex Vertex::substract(Vertex& a, Vertex& b)
{
	Vertex* ret = new Vertex::Vertex(a.x - b.x, a.y - b.y, a.z - b.z);
	return *ret;
}

