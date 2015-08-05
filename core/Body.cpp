/*
 * Shape.cpp
 *
 *  Created on: 30 de jul de 2015
 *      Author: juan
 */

#include "Body.h"

Body::Body(int sizeX, int sizeY) {
	this->sizeX = sizeX;
	this->sizeY = sizeY;
	deformX = 0;
	deformY = 0;
}

Body::~Body() {
}

int Body::getDeformX() const {
	return deformX;
}

void Body::setDeformX(int deformX) {
	this->deformX = deformX;
}

int Body::getDeformY() const {
	return deformY;
}

void Body::setDeformY(int deformY) {
	this->deformY = deformY;
}

int Body::getSizeX() const {
	return sizeX;
}

void Body::setSizeX(int sizeX) {
	this->sizeX = sizeX;
}

int Body::getSizeY() const {
	return sizeY;
}

void Body::setSizeY(int sizeY) {
	this->sizeY = sizeY;
}

int Body::getDeformedSizeX() {
	if(deformX > 0)
		return sizeX + deformX;
	else
		return sizeX;
}

int Body::getDeformedSizeY() {
	if(deformY > 0)
		return sizeY + deformY;
	else
		return sizeY;
}

void Body::addDeformX(int x) {
	deformX += x;
}

void Body::addDeformY(int y) {
	deformY += y;
}

int Body::getNegativeDeformX() {
	if(deformX < 0)
		return deformX;
	else
		return 0;
}

int Body::getNegativeDeformY() {
	if(deformY < 0)
		return deformY;
	else
		return 0;
}

Body::Body() {
	sizeX = 0;
	sizeY = 0;
	deformX = 0;
	deformY = 0;
}
