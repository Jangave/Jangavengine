/*
 * Tangible.cpp
 *
 *  Created on: 30 de jul de 2015
 *      Author: juan
 */

#include "Tangible.h"

#include "Position.h"

#include "Types.h"

Tangible::Tangible(Body* shape) : Node(){
	this->shape = shape;
	type *= TANGIBLE;
}

Tangible::Tangible(Body* shape, Position* position) : Node(position){
	this->shape = shape;
	type *= TANGIBLE;
}

Body*& Tangible::getShape() {
	return shape;
}

Tangible::~Tangible() {
	delete shape;
}

void Tangible::onCollide(Tangible* other) {
}

bool Tangible::isColliding(Tangible* other) {
	return (dX2()> other->dX()  &&
			dX() < other->dX2() &&
		    dY2()> other->dY()  &&
			dY() < other->dY2());
}

int Tangible::dX() {
	return position->getX()+shape->getNegativeDeformX();
}

int Tangible::dY() {
	return position->getY()+shape->getNegativeDeformY();
}

int Tangible::dX2() {
	return position->getX() + shape->getDeformedSizeX();
}

int Tangible::dY2() {
	return position->getY() + shape->getDeformedSizeY();
}

void Tangible::setShape(Body*& shape) {
	this->shape = shape;
}

Body Tangible::intersectionSize(Tangible* other) {
	int x, x2, y, y2;

	if(dX() < other->dX() && other->dX() < dX2())
		x = other->dX();
	else
		x = dX();
	if(dX() < other->dX2() && other->dX2() < dX2())
		x2 = other->dX2();
	else
		x2 = dX2();

	if(dY() < other->dY() && other->dY() < dY2())
		y = other->dY();
	else
		y = dY();
	if(dY() < other->dY2() && other->dY2() < dY2())
		y2 = other->dY2();
	else
		y2 = dY2();

	return Body(x2 - x, y2 - y);
}

/*int Tangible::intersectionSizeX(Tangible* other) {
	int x, x2, y, y2;

	if(dX() < other->dX() && other->dX() < dX2())
		x = other->dX();
	else
		x = dX();
	if(dX() < other->dX2() && other->dX2() < dX2())
		x2 = other->dX2();
	else
		x2 = dX2();

	return x2 - x;
}*/
