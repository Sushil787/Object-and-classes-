#include <iostream> 
using namespace std; 

class A { 
public: 
	void showf() 
	{ 
		cout << "This is class A\n"; 
	} 
}; 

// Container class 
class B { 
	// creating object of first 
	A f; 

public: 
	// constructor 
	B() 
	{ 
		// calling function of first class 
		f.showf(); 
	} 
}; 

int main() 
{ 
	// creating object of second 
	B s; 
} 
