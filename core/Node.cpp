/*
 * Node.cpp
 *
 *  Created on: 31 de jul de 2015
 *      Author: juan
 */

#include "Node.h"

Node::Node(){
	type = 1;
}

Node::Node(Position* position){
	this->position = position;

	type = 1;
}

Node::~Node(){
}

Position* Node::getPosition() {
	return position;
}

void Node::setPosition(Position* position) {
	this->position = position;
}
