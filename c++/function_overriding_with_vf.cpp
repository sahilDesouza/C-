#include <iostream>
using namespace std;

class Base 
{
   	public:
	//since its virtual this is not visible when address of derr class stored in pointer of base class
    	virtual void print() 
    	{
        	cout << "Base Function" << endl;
    	}
};

class Derived : public Base 
{
   	public:
    	void print() 
	{
        	cout << "Derived Function" << endl;
    	}
};

int main() 
{
    	Derived derived1;
	//Derived * dptr = new Derived;

	derived1.print();

    	//pointer of Base type that points to derived1
    	//Base* base1 = &derived1;
	Base * base1 = new Derived;

    	//calls member function of Derived class
   	base1->print();

	Base * ptr = new Base;
	ptr->print();

    	return 0;
}