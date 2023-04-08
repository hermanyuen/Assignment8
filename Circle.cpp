#include "Circle.h"



Circle::Circle(
	const Point& origin,
	double radius,
	std::ostream& canvas) 
	: origin(origin), radius(radius), canvas(canvas) {
	canvas << "";
}

const Point& Circle::getOrigin() const {
	return origin;

}
const double Circle::getRadius() const {
	return radius;
}

void Circle::draw() const {
	Circle::stream(canvas);
}

void Circle::stream(std::ostream& os) const {
	os << "draw circle: "
		<< (origin.getX()) << "," << (origin.getY()) << ","
		<< (getRadius());
}
