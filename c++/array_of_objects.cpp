

#include <iostream>
using namespace std;


class array_of_objects
{
	public:
	string name;
	void get_name()
	{
		cout << "Enter your name: ";
		cin >> name;
		cout << endl;
	}
	void print_name()
	{
		cout << "Name is " << name;
	}
    
};

int main()
{
	//array of objects
	//similar to array of structures
	array_of_objects objs[5];

	for (int i = 0; i < 5; i++)
	{
		objs[i].get_name();
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "student" << i << endl;
		objs[i].print_name();
		cout << endl;
	}
}
