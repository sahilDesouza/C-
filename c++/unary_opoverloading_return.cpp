

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
		operator_overloading operator ++()
		{
			//temp object created
			operator_overloading temp;
			cout << "pre increment\n";

			//update count and var of temp object
			temp.count = ++count;
			temp.var = ++var;

			//return object value temp and result collected
			return temp;
		}

		//post_increment
		operator_overloading operator ++(int)
		{
			//temp object created
			operator_overloading temp;
			cout << "post increment\n";

			temp.count = count++;
			temp.var = var++;
			return temp;
		}

		void display()
		{
			cout << var << endl;
		}

		
};


int main()
{
	operator_overloading opov, result;

	//pre_increment
	result = ++opov;
	int value = result.count;
	cout << value <<  "\n";
	opov.display();

	//post_increment
	opov++;
	int value_post = opov.count;
	cout << value_post << "\n";

	opov.display();

}