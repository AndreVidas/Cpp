#include <iostream>

using namespace std;

struct DateStruct{
	int month;
	int day;
	int year;
};

void print(DateStruct &date){
	cout << date.month << "/" << date.day << "/" << date.year << endl;
}

int main(){
	DateStruct today {10, 14, 2020}; // use uniform initialization
	print(today);
	
	today.day = 16; // use member selection operator select a member of the struct.
	print(today);

	return 0;
}