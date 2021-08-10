
#include <iostream>
using namespace std; 


class constructor
{

	public:
		int size;
		string answer;
		//constructor should always be in public access modifier
		//Constructor to be declared outside class
    		constructor(int n, string name, float size);
    		//~constructor();
    		constructor(int n, string name)
    		{
			cout << "parameterised constructor" << endl;
			cout << "n: " << n << "\nname: " << name << endl; 
    		}
		//constructor overload
    		constructor() : size(10), answer("sahil")
    		{
			//size = 10;
			cout << "\nNot parameterised constructor " << answer << endl;
    		}
	    

	/*
	void trial()
	{
		//different scope soo ERROR
		cout << "n: " << n << "\nname: " << name << endl;  
	}
	*/
};

//constructor overload ->if it is called multiple times
constructor :: constructor(int n, string name, float size)
{
	cout << "\nparameterised constructor outside class" << endl;
	cout << "n: " << n << "\nname: " << name << "\nname: " << name<< endl; 

}

/*
constructor::~constructor()
{
}
*/

int main()
{
	constructor construct(10, "sahil"), constructor2, constructor3(20, "desouza", 3.14);
	constructor(1, "sahil", 1.1);
	//updating members in the class like in structures
	construct.answer = "Desouza john";
	cout << "Answer: "<< construct.answer << endl;

	//Not a copy constructor
	constructor construct1 = construct;

	//copy of the constructor
	cout << endl;
	constructor constructor4(construct);
	cout << "Answer: "<< constructor4.answer << endl;

	//nameless object
	//constructor and destructor called same time
	constructor();
}
