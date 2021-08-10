

#include <iostream>
using namespace std;

class mutable_t
{
	mutable int a; //private member
	int b;
	public:
		int c;
		mutable_t(int x, int y) 
		{
			a = x;
			b = y;
		}
		void val() const
		{
			//error without mutable int a;
			//provided this function memeber is constant
			a = 10;
		}
		void print_answer() const
		{
			cout << "A value is " << a << ", B value is " << b << endl;
		}
		
};




int main()
{
	const mutable_t mutual_class(2, 3);
	//since ablve obj is cont same like structures its memebers connot be accessed
	//mutual_class.c = 10;ERROR
	mutual_class.print_answer();
	
}