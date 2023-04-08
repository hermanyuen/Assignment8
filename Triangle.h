#pragma once

#include "Shape.h"
#include "Point.h"
#include <ostream>

class Triangle : public Shape
{
public:

	Triangle(
		const Point& v1,
		const Point& v2,
		const Point& v3,
		std::ostream& canvas); //std::ostream& canvas);
	~Triangle() = default;

	const Point& getV1() const;
	const Point& getV2() const;
	const Point& getV3() const;

	virtual void draw() const override;
	virtual void stream(std::ostream& os) const override;

	//virtual std::ostream& operator<<(std::ostream& os, const Shape& shape);
	// friend std::ostream& operator<<(std::ostream & os, Triangle& obj);
	//void stream(std::ostream& os);
	//TODO: implement
	
private:
	//TODO: implement
	Point v1;
	Point v2;
	Point v3;
	std::ostream& canvas;
};

