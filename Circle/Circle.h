/* The Circle class Header (Circle.h) */
#include <string>
using namespace std;

// Circle class declaration
class Circle {
private:
	double radius;
	string color;

public:
	// constructor
	Circle(double radius = 1.0, string color = "red");

	double getRadius() const;
	void setRadius(double radius);
	string getColor() const;
	void setColor(string color);

	double getArea() const;

	void print();
};