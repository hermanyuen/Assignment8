#include "Rectangle.h"

Rectangle::Rectangle(
	const Point& v1,
	const Point& v2,
	std::ostream& canvas)
	: v1(v1), v2(v2), canvas(canvas) {
	canvas << "";
}

const Point& Rectangle::getV1() const {
	return v1;
}

const Point& Rectangle::getV2() const {
	return v2;
}

void Rectangle::draw() const {
	Rectangle::stream(canvas);
}

void Rectangle::stream(std::ostream& os) const {
	os << "draw rectangle: "
		<< (v1.getX()) << "," << (v1.getY()) << ","
		<< (v2.getX()) << "," << (v2.getY());
}