/* A test driver for the Circle class (TestCircle.cpp) */
#include <iostream>
#include "Circle.h" // using Circle class
using namespace std;

int main(){
	// Construct an instance of Circle c1
	Circle c1(1.2, "red");
	c1.print();

	c1.setRadius(2.1); // Change radius and color of c1
	c1.setColor("blue");
	c1.print();

	// Construct another instance using the default constructor
	Circle c2;
	c2.print();

	return 0; 
}