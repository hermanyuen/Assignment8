#include "TestHarness.h"

#include "Circle.h"

TEST(DrawCircle, CircleShape){

	Point origin(1.1, 2.5);
	std::stringstream ss;
	double radius = 0.7;
	Circle c1(origin, radius, ss);

	c1.draw();
	CHECK_EQUAL("draw circle: 1.1,2.5,0.7", ss.str());

	Point origin2(0, 0);
	std::stringstream ss2;
	double radius2 = 0;
	Circle c2(origin2, radius2, ss2);

	c2.draw();
	CHECK_EQUAL("draw circle: 0,0,0", ss2.str());
}

TEST(CircleStream, CircleShape2) {
	Point origin(1.1, 2.5);
	std::stringstream ss;
	double radius = 0.7;
	Circle c1(origin, radius, ss);

	ss << (ss, c1);
	CHECK_EQUAL("draw circle: 1.1,2.5,0.7", ss.str());

	Point origin2(0, 0);
	std::stringstream ss2;
	double radius2 = 0;
	Circle c2(origin2, radius2, ss2);

	ss2 << (ss2, c2);
	CHECK_EQUAL("draw circle: 0,0,0", ss2.str());
}