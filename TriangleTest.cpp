#include "TestHarness.h"

#include "Triangle.h"

TEST(DrawTriangle, TriangleShape) {

	Point v1(1.1, 2.5);
	Point v2(2.1, 3.5);
	Point v3(3.1, 4.5);
	std::stringstream ss;
	Triangle t1(v1,v2,v3, ss);

	t1.draw();
	CHECK_EQUAL("draw triangle: 1.1,2.5,2.1,3.5,3.1,4.5", ss.str());

	Point v1_2(0, 0);
	Point v2_2(0, 0);
	Point v3_2(0, 0);
	std::stringstream ss2;
	Triangle t2(v1_2, v2_2, v3_2, ss2);

	t2.draw();
	CHECK_EQUAL("draw triangle: 0,0,0,0,0,0", ss2.str());
}

TEST(TriangleStream, TriangleShape2) {
	Point v1(1.1, 2.5);
	Point v2(2.1, 3.5);
	Point v3(3.1, 4.5);
	std::stringstream ss;
	Triangle t1(v1, v2, v3, ss);

	ss << (ss, t1);
	CHECK_EQUAL("draw triangle: 1.1,2.5,2.1,3.5,3.1,4.5", ss.str());

	Point v1_2(0, 0);
	Point v2_2(0, 0);
	Point v3_2(0, 0);
	std::stringstream ss2;
	Triangle t2(v1_2, v2_2, v3_2, ss2);

	ss2 << (ss2, t2);
	CHECK_EQUAL("draw triangle: 0,0,0,0,0,0", ss2.str());
}