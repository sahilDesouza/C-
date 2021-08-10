
#include <iostream>
#include <string.h>
using namespace std; 

//multilevel inheritance
//baseclass->subclass(derived from base class)


//base_class1
class inheritance
{

public:
	//members declared
	int a;
	string names;
	//method call
	void stuff()
	{
		cout<<"Enter your stupid name: ";
		cin >> names;
		cout <<"\nname in base_class1: "<< names <<endl;
	}
};
//base_class2
class surname
{
	public:
		string name = "sahil";
		void print_stuff()
		{
			cout<<"name in base_class2: " << name << endl;
		}
};
//derived_class
class final: public inheritance, public surname
{
	public:
		void stuff_again()
		{
			cout<<"\nInherited stuff\n";
			cout<<"name in base_class1: " << names << endl;
			cout<<"name in base_class2: " << name << endl;
		}
};
/*
inheritance::inheritance()
{
}

inheritance::~inheritance()
{
}
*/

int main()
{
	final fun;
	fun.stuff();
	fun.print_stuff();
	fun.stuff_again();

	
}