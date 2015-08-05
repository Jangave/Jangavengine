/*
 * Particle.cpp
 *
 *  Created on: 31 de jul de 2015
 *      Author: juan
 */

#include "Particle.h"

Particle::Particle(Position* position, Image* image, Ambient* ambient) : Updateable(ambient), Drawable(image) {
	this->position = position;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

