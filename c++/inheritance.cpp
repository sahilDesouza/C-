
#include <iostream>
#include <string.h>
#include <string>
using namespace std; 

//single inheritance
//baseclass->subclass(derived from base class)


//base class
class inheritance
{
	private:
		int try_me;

	public:
		//members declared
		int a;
		string name;
		//method call
		void stuff()
		{
			cout<<"Enter your stupid name: ";
			cin >> name;
			cout <<"\nname in base_class: "<< name <<endl;
		}
		void stuff(int value);
		int stuff(float value);
		inheritance()
		{
			cout << "inheritance class called\n";
		}
};
//void inheritance :: stuff(int value);
//subclass
class surname: public inheritance
{
	//data memembers inherietd
	public:
		void print_stuff()
		{
			cout<<"name in derived_class: " << name << endl;
		}
};

class surname2 : private inheritance
{
	public:
		int try_function(void)
		{
			name = "sahil";
		}

		surname2()
		{
			cout << "surname2 class called\n";
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

	char const * char_array_ptr[2] = {"sahil", "desouza"};
	
	inheritance stuff;
	//cant access
	//stuff.try_me;
	surname name;
	name.stuff();
	name.print_stuff();

	surname2 surnames;
	surnames.try_function();
	//error cannot access
	//surnames.name;
	

}