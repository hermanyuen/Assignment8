#pragma once

#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
public:
	Circle(
		const Point& origin,
		double radius,
		std::ostream& canvas);

	const Point& getOrigin() const;
	const double getRadius() const;
	virtual void draw() const override;
	virtual void stream(std::ostream& os) const override;

	//TODO: implement
	
private:
	//TODO: implement
	Point origin;
	double radius;
	std::ostream& canvas;
};