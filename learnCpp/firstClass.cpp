#include <iostream>
#include <string>

using namespace std;

class Employee{
private:
	string m_name;
	int m_id;
	double m_wage;

public:
	// print employee information to the screen
	void print(){
		cout << "Name: " << m_name <<
			" ID: " << m_id <<
			" Wage: $" << m_wage << endl;
	}

	void setDate(string name, int id, double wage){
		m_name = name;
		m_id = id;
		m_wage = wage;
	}
};

int main(){
	// declare two employees
	Employee joe;
	Employee alex;

	joe.setDate("Joe", 1, 25.25);
	alex.setDate("Alex", 2, 1.23);

	// print out the employee information
	joe.print();
	alex.print();

	return 0;
}