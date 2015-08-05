/*
 * Drawable.h
 *
 *  Created on: 30 de jul de 2015
 *      Author: juan
 */

#ifndef CORE_OBJECTS_HEADERS_DRAWABLE_H_
#define CORE_OBJECTS_HEADERS_DRAWABLE_H_

#include "Image.h"
#include "Node.h"

class Drawable : virtual public Node{
public:
	Drawable(Image* image);
	Drawable(Image* image, Position* p);
	~Drawable();

	virtual void draw();

	Image*& getImage();
	void setImage(Image*& image);

protected:
	Image* image;

	//Position* position;
};

#endif /* CORE_OBJECTS_HEADERS_DRAWABLE_H_ */
