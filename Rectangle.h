#pragma once

#include "Shape.h"
#include "Point.h"

class Rectangle : public Shape
{
public:
	Rectangle(
		const Point& v1,
		const Point& v2,
		std::ostream& canvas);

	const Point& getV1() const;
	const Point& getV2() const;

	virtual void draw() const override;
	virtual void stream(std::ostream& os) const override;
	//TODO: implement

private:
	//TODO: implement
	Point v1;
	Point v2;
	std::ostream& canvas;
};