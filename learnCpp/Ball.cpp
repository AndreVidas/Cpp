#include <iostream>
#include <string>

using namespace std;

class Ball{
private:
	const string m_color = "black";
	const double m_radius = 10.0;

public:

	Ball(){
	}

	Ball(const string &color):
	m_color(color){
	}

	Ball(const double &radius):
	m_radius(radius){
	}

	Ball(const string &color, const double &radius):
	m_color(color), m_radius(radius){
	}

	// print out color and radius of ball
	void print(){
		cout << "color: " << m_color
			 << ", radius: " << m_radius << endl;
	}

	/*
	void setColor(const string &color){
		m_color = color;
	}

	void setRadius(const double &radius){
		m_radius = radius;
	}
	*/
	
};

int main(){
	Ball def;
	def.print();

	Ball blue("blue");
	blue.print();

	Ball twenty(20.0);
	twenty.print();

	Ball blueTwenty("blue", 20.0);
	blueTwenty.print();

	/*
	blueTwenty.setColor("red");
	blueTwenty.setRadius(10.0);
	blueTwenty.print();
	*/
	return 0;

}