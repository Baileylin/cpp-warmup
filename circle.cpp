#include "circle.h"
#include <cmath>
#include <numbers>


using namespace std;

Circle::Circle() {
	radius = 0;
}

Circle::Circle(float input_radius) {
	radius = input_radius;
}

Circle::Circle(const Circle& circle) {
	radius = circle.radius;
};
Circle::~Circle() {
}; 

float Circle::getRadius() {
	return radius;
};
void Circle::setRadius(float input_radius) {
	radius = input_radius;
};
float Circle::computeArea() {
	const float pi = 2 * acos(0.0);
	return pi*pow(radius,2.0f);
}
Circle& Circle::operator=(const Circle& circle)
{
	radius = circle.radius;
	return *this;
}
Circle Circle::operator+(const Circle& circle)
{
	Circle outputCircle(this->radius + circle.radius);
	return outputCircle;
}
;

std::ostream& operator<<(std::ostream& os, const Circle& circle)
{
	os << circle.radius;
	return os;
}
