
// Example showing how to use delegating constructors in C++11.
#include <string>

using namespace std;

class Employee{
private:
	int m_id = 1;
	string m_name = "genericName";

public:
	Employee(int id, string name):
	m_id(id), m_name(name){}


	// all three of the following constructors use delegating construtors to minimize redundant code.
	Employee() : Employee(0, ""){}
	Employee(int id) : Employee(id, "") {}
	Employee(string name) : Employee(0, name) {}

};


int main(){
	Employee carsten(1,"Carsten");
	Employee joe(2);
	Employee johanne("Johanne");
}