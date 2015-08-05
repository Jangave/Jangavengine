/*
 * Bomberman.h
 *
 *  Created on: 31 de jul de 2015
 *      Author: juan
 */

#ifndef BOMBERMANMNNNMN_HEADERS_BOMBERMAN_H_
#define BOMBERMANMNNNMN_HEADERS_BOMBERMAN_H_

#include "../core/Ambient.h"
#include "../core/Window.h"

class Bomberman {
public:
	Bomberman();
	virtual ~Bomberman();

	int execute();

	Window* window;
	Ambient* ambient;

};

#endif /* BOMBERMANMNNNMN_HEADERS_BOMBERMAN_H_ */
