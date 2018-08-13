#ifndef LOCALGEO_H
#define LOCALGEO_h

#include "Vertex.h"

class LocalGeo
{
	public:
		Vertex* pos;
		Vertex* normal;
		LocalGeo();
		LocalGeo(Vertex* _pos, Vertex* _normal);
};

#endif