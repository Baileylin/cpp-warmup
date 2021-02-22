// Name:
// Date:

#pragma once
#include <iostream>

class Circle {
private:
	float radius;
public:
	Circle();
	Circle(float input_radius);
	Circle(const Circle& circle);
	~Circle();
	float getRadius();
	void setRadius(float input_radius);
	float computeArea();
	Circle& operator=(const Circle& circle);
	Circle operator+(const Circle& circle);
	friend std::ostream& operator<<(std::ostream& os, const Circle& circle);
};
