#include <iostream>
#include <string.h>
using namespace std; 



class destructor
{
	private:
    		int a, b;
	public:
		int c = 0, d;
		char * str;
		//string s;

		//constructor called to allocate memory
		destructor()
		{    	
			cout <<"constructor called mem allocated"<< endl;
			str = (char *)malloc(sizeof(char) * 10);
    		}
		//method to print string
    		void get_details()
    		{
			cout << "\nstring is:" << str << endl;
    		}
   		~destructor()
    		{
			cout <<"\ndestructor called memory freed" <<endl;
			free(str);
			//method2 to free
			//delete str;
    		}
};
void destructor_function(destructor value);
/*
destructor::destructor()
{
}

destructor::~destructor()
{
}
*/
int main()
{
	destructor dest, dest_function_call;
	
	strcpy(dest.str, "hello");
	dest.get_details();

	dest.~destructor();

	destructor_function(dest_function_call);

	int n = 1000000000;
	while(--n);
}

void destructor_function(destructor value)
{
	;
}