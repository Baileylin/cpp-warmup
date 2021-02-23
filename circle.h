// Name: Yikang Lin
// Date: Februrary 22, 2021

#pragma once
#include <iostream>

class Circle {
private:
	float radius;
public:
	Circle();  //default constructor
	Circle(float input_radius);  //constructor with input
	Circle(const Circle& circle);  //copy constructor 
	~Circle();  //destructor
	float getRadius();  //gettter for radius
	void setRadius(float input_radius);  //setter for radius
	float computeArea();  //method for calculating area
	Circle& operator=(const Circle& circle);  //assignment operator
	Circle operator+(const Circle& circle);  //add operator
	friend std::ostream& operator<<(std::ostream& os, const Circle& circle);  //output stream operator
};
