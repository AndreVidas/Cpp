#include <iostream>
#include <string>

using namespace std;

class Point3d{
private:
	double m_x;
	double m_y;
	double m_z;

public:
	void setValues(int x, int y, int z){
		m_x = x;
		m_y = y;
		m_z = z;
	}

	void print(){
		cout << "<" << m_x
			 << "," << m_y
			 << "," << m_z
			 << ">" << endl;
	}
};

int main(){
	// create a point object:
	Point3d point;
	point.setValues(3,5,21);

	point.print();

	return 0;
}