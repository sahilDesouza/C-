

#include <iostream>
#include <string.h>
using namespace std;

struct student
{
	static float x;
	char array[20];
	int function()
	{
		return 5;
	}
};



float student :: x = 10;

struct student function(void);
int main()
{
	struct student s1, s2;
	
	s1 = function();
	cout << "s1 static value s1.x = " << s1.x << "\t" << "name is " << strcpy(s1.array, "Sahil") << "\n";
	s1.x++;
	//s1.x = 40;
	cout << "s2 static value s2.x = " << s2.x << "\t" << "name is " << strcpy(s1.array, "Desouza") << "\n";
}

struct student function(void)
{
	struct student s1;
	s1.x = 20;
	return s1;
}