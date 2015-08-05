/*
 * Tangible.h
 *
 *  Created on: 30 de jul de 2015
 *      Author: juan
 */

#ifndef CORE_OBJECTS_HEADERS_TANGIBLE_H_
#define CORE_OBJECTS_HEADERS_TANGIBLE_H_

#include "Body.h"
#include "Node.h"


class Tangible : virtual public Node{
public:
	Tangible(Body* shape);
	Tangible(Body* shape, Position* position);

	~Tangible();

	bool isColliding(Tangible* other);
	virtual void onCollide(Tangible* other);
	Body intersectionSize(Tangible* other);
	int intersectionSizeX(Tangible* other);
	int intersectionSizeY(Tangible* other);

	int dX();//deformedX
	int dY();//deformedY
	int dX2();//X + deformed sizeX
	int dY2();//Y + deformed sizeY

	Body*& getShape();
	void setShape(Body*& shape);

protected:

	Body* shape;
};

#endif /* CORE_OBJECTS_HEADERS_TANGIBLE_H_ */
