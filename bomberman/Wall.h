/*
 * Wall.h
 *
 *  Created on: 2 de ago de 2015
 *      Author: juan
 */

#ifndef BOMBERMANMNNNMN_HEADERS_WALL_H_
#define BOMBERMANMNNNMN_HEADERS_WALL_H_

#include "../core/Object.h"

class Wall: public Object {
public:
	Wall(Position* position, Image* image, Body* shape);
	virtual ~Wall();
};

#endif /* BOMBERMANMNNNMN_HEADERS_WALL_H_ */
