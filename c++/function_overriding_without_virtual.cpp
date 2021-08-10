

// C++ program to access overridden function
// in main() using the scope resolution operator ::

#include <iostream>
using namespace std;

class Base 
{
  	public:
		int values = 5;
    		void print() 
    		{
        		cout << "Base Function" << endl;
    		}
	    
		void hello() 
		{
        		cout << "hello Function" << endl;
    		}
};
//multilevel inheritence
class Derived : public Base 
{
   	public:
		int values = 10;
    		void print() 
		{
        		cout << "Derived Function" << endl;
    		}
		//void temp(){} non accesable using base_ptr for derr2
		//hello here not visible to ptr
		/*
		void hello() 
		{
        		cout << "hello Function" << endl;
    		}
		*/
	
};
class Derrived2 : public Derived
{
   	public:
    	void print() 
	{
        	cout << "Derived Function2" << endl;
    	}
	
};
int main() 
{
    	Derived derived1, derived2, derrived3;
    	derived1.print();

	Base * bptr = &derrived3;
	cout << bptr->values;

    	// access print() function of the Base class
	//can be derr1 also
    	derived2.Base::print();

	//Derived * dptr = new Derived;

	//prints base function
	Base * ptr = &derrived3;
	ptr->print();
	ptr->hello();
	//Base bs;
	//Derived * ptr = &bs;//ERROR

	Derrived2 derr2;
	Base * ptr_derr2 = &derr2;
	ptr_derr2->print();
	
    	return 0;
}