/*
 * DestroyableWall.cpp
 *
 *  Created on: 2 de ago de 2015
 *      Author: juan
 */

#include "DestroyableWall.h"

#include "../core/Image.h"
#include "Types.h"

DestroyableWall::DestroyableWall(Position* position, Image* image, Body* shape) : Wall(position, image, shape) {
	image->setColor(0.804, 0.522, 0.247);
	type *= DESTROYABLE;
}

DestroyableWall::~DestroyableWall() {
}
