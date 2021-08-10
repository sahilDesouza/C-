
#include <iostream>
using namespace std;



typedef struct child
{
	unsigned int age : 4;
	unsigned char gender : 1;
	unsigned int size : 2;
}child_t;

class trial
{
    	private:
        	int var;
	public:
		int count;
		int option;
    		trial() : count(5), var(5){}
			//trial(int value) : count(value), var(5){}

		void enter_details();

		
		int display()
		{
			return 5;
		}

		
};
int main()
{
    	cout << "size of is :" << sizeof(child_t) << "\n";

	char values = 130;
	unsigned int a = 0xA3;
	char value2 = 100;
	//cout << "values :" << a << "\n";
	//cout << "value2 :" << value2 << "\n";
	printf("%d\n", values);


	//printf("%d\n", values);
	//printf("%u\n", value2);
	trial temp;
	cout << temp.display();

}