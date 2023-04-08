#include "TestHarness.h"

#include "Rectangle.h"

TEST(DrawRectangle, RectangleShape) {
	Point v1(1.1, 2.5);
	Point v2(2.1, 3.5);
	std::stringstream ss;
	Rectangle r1(v1, v2, ss);

	r1.draw();
	CHECK_EQUAL("draw rectangle: 1.1,2.5,2.1,3.5", ss.str());

	Point v1_2(0, 0);
	Point v2_2(0, 0);
	std::stringstream ss2;
	Rectangle r2(v1_2, v2_2, ss2);

	r2.draw();
	CHECK_EQUAL("draw rectangle: 0,0,0,0", ss2.str());
}

TEST(RectangleStream, RectangleShape2) {
	Point v1(1.1, 2.5);
	Point v2(2.1, 3.5);
	std::stringstream ss;
	Rectangle r1(v1, v2, ss);

	ss << (ss, r1);
	CHECK_EQUAL("draw rectangle: 1.1,2.5,2.1,3.5", ss.str());

	Point v1_2(0, 0);
	Point v2_2(0, 0);
	std::stringstream ss2;
	Rectangle r2(v1_2, v2_2, ss2);

	ss2 << (ss2, r2);
	CHECK_EQUAL("draw rectangle: 0,0,0,0", ss2.str());
}