

#include <iostream>
using namespace std;

//base class
class access_modifiers
{
	private:
	double area;

	protected:
	float data;

	public:
		float a, b;
		//a = 10;ERROR
		void area_ofrect()
		{
			area = a * b;
		}
		void display()
		{
			cout << "Rect area is:" << area << endl;
		}
		void hello();
		//access_modifiers(/* args */);
		//~access_modifiers();


};
void access_modifiers :: hello()
{
	area = 10;
	data = 20;
}

class derrived : public access_modifiers
{
	public:
		
		//a = 10//ERROR because has to be in function
		void perimeter()
		{
			//area->ERROR cannot be accessed
			data = a + b;
		}
		void display_peri()
		{
			cout << "peri is:" << data << endl;
		}

};
/*
access_modifiers::access_modifiers()
{
}

access_modifiers::~access_modifiers()
{
}

*/

int main()
{
	access_modifiers acc_mod1;
	derrived derr_class1;
	acc_mod1.a = 1;
	acc_mod1.b = 2;
	acc_mod1.area_ofrect();
	acc_mod1.display();


	derr_class1.a = 1;
	derr_class1.b = 2;
	derr_class1.perimeter();
	derr_class1.display_peri();
}
