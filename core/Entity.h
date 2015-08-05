/*
 * Entity.h
 *
 *  Created on: 31 de jul de 2015
 *      Author: juan
 */

#ifndef CORE_OBJECTS_HEADERS_ENTITY_H_
#define CORE_OBJECTS_HEADERS_ENTITY_H_

#include "Drawable.h"
#include "Tangible.h"
#include "Updateable.h"

class Image;

class Entity : public Drawable, public Tangible, public Updateable {
public:
	Entity(Position* p, Image* image, Body* shape, Ambient* ambient);
	virtual ~Entity();
};

#endif /* CORE_OBJECTS_HEADERS_ENTITY_H_ */
