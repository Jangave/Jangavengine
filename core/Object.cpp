/*
 * Object.cpp
 *
 *  Created on: 31 de jul de 2015
 *      Author: juan
 */

#include "Object.h"

Object::Object(Position* position, Image* image, Body* shape) : Tangible(shape), Drawable(image) {
	this->position = position;
}

Object::~Object() {
	// TODO Auto-generated constructor stub

}

