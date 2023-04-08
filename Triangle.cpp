#include "Triangle.h"
#include <iostream>

Triangle::Triangle(
	const Point& v1,
	const Point& v2,
	const Point& v3,
	std::ostream& canvas)
	: v1(v1), v2(v2), v3(v3), canvas(canvas) {
	canvas << "";
}

const Point& Triangle::getV1() const {
	return v1;
}
const Point& Triangle::getV2() const {
	return v2;
}
const Point& Triangle::getV3() const {
	return v3;
}

void Triangle::draw() const {
	Triangle::stream(canvas);
}

void Triangle::stream(std::ostream& os) const {
	os << "draw triangle: "
		<< (v1.getX()) << "," << (v1.getY()) << ","
		<< (v2.getX()) << "," << (v2.getY()) << ","
		<< (v3.getX()) << "," << (v3.getY());
		//<< std::endl;
}


