

#include <iostream>
using namespace std;

class dynamic_allocation
{
	public:

	void print_info()
	{
		cout << "Hello\n";
	}
};



int main()
{
	//variable allocation and inititalisation to 4
	//int * ptr = new int(4);
	//cout << *ptr <<endl;
	//free dynamically allocated memory
	//delete ptr;

	//array allocation
	int * ptr = new int[10];
	*(ptr + 6) = 14;
	cout << *(ptr + 6) <<endl;

	//free the array of dynamically allocated memory
	delete[] ptr;

	dynamic_allocation *dyA = new dynamic_allocation;

	dyA->print_info();
 
}