

#include <iostream>

using namespace std;

//unary operator overloading
class operator_overloading
{
    	private:
        	int var;
	public:
		int count;
		
    		operator_overloading() : count(5), var(5){}

		//pre increment
		//cannot store into var in same line
		//unless void replaced by class_name
		void operator ++()
		{
			cout << "pre increment\n";
			++count;
			++var;
		}
		

		//post_increment
		void operator ++(int)
		{
			cout << "post increment\n";
			count++;
			++var;
		}

		void display()
		{
			cout << var << endl;
		}

		
};


int main()
{
	operator_overloading opov;

	//pre_increment
	++opov;
	int value = opov.count;
	cout << value <<  "\n";
	opov.display();

	//post_increment
	opov++;
	int value_post = opov.count;
	cout << value_post << "\n";

	opov.display();

}