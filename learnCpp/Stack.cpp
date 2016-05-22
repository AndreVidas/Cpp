#include <iostream>

using namespace std;

class Stack{
private:
	// initialize member variables
	int arr[10];
	int stackLength;

public:
	// reset stack length
	void reset(){
		for(int i = 0; i < (sizeof(arr) / sizeof(int)); i++){
			arr[i] = 0;
		}
		stackLength = 0;
	}

	// push a value onto the stack
	bool push(int value){
		// check if stack is full
		if(stackLength == sizeof(arr) - 1){
			return false;
		} else{
			arr[stackLength] = value;
			stackLength += 1;
			return true;
		}
	}

	// pop a value off the stack and return it
	int pop(){
		if(stackLength == 0){
			return -1;
		} else{
			int value = arr[stackLength-1];
			arr[stackLength] = 0;
			stackLength = stackLength - 1; 
			return value;
		}
	}

	// print stack
	void print(){
		cout << "(";
		for(int i = 0; i < stackLength; i++){
			cout << " " << arr[i];
		}
		cout << " )" << endl;
	}





};

int main(){
	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
 
	return 0;


}