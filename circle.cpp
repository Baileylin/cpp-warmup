// Name: Yikang Lin
// Date: Februrary 22, 2021

#include "circle.h"
#include <cmath>
#include <numbers>

using namespace std;

//initialize a default circle with radius 0
Circle::Circle() {
	radius = 0;
}

//constructor taking in input
Circle::Circle(float input_radius) {
	radius = input_radius;
}

//copy constructor
Circle::Circle(const Circle& circle) {
	radius = circle.radius;
};

//destructor
Circle::~Circle() {
}; 

//return the radius of circle
float Circle::getRadius() {
	return radius;
};

/* set the radius of a circle
* @param float inputRadius: the float value of the radius that will be changed to 
*/
void Circle::setRadius(float inputRadius) {
	radius = inputRadius;
};

//return the area of the circle
float Circle::computeArea() {
	const float pi = 2 * acos(0.0);
	return pi*pow(radius,2.0f);
}

/* return a reference to the object(the object itself)
* @param const Circle& circle: reference to a circle object that is not going to change inside the method 
*/
Circle& Circle::operator=(const Circle& circle)
{
	radius = circle.radius;
	return *this;
}

/* return a circle object
* @param const Circle& circle: reference to a circle object that is not going to change inside the method
*/
Circle Circle::operator+(const Circle& circle)
{
	Circle outputCircle(this->radius + circle.radius);
	return outputCircle;
}
;

/* return an output stream
* @param std::ostream& os: an output stream
*		 const Circle& circle: reference to a circle object that is not going to change inside the method
*/
std::ostream& operator<<(std::ostream& os, const Circle& circle)
{
	os << circle.radius;
	return os;
}
