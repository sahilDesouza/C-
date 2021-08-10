

#include <iostream>

using namespace std;

class bin_op_overloading
{
	private:
		float real;
		float imaginary;
	public:
		//char * print_strings;
		int i = 0;
		bin_op_overloading() : real(0), imaginary(0) {}

		void input()
		{
			cout << "Enter real and imaginary parts respectively: ";
        		cin >> real;
        		cin >> imaginary;
		}
		//operator function
		//The operator function is called using the obj1 object
		//obj2 is passed as an argument to the function.
		bin_op_overloading operator + (bin_op_overloading &operand2)
		{
			bin_op_overloading temp;
			temp.real = real + operand2.real;
			temp.imaginary = imaginary + operand2.imaginary;

			return temp;
		}
		
		void operator << (const char * print_string)
		{
			while (print_string[i])
			{
				putchar(print_string[i]);
				i++;
			}
			
		}
		/*
		bin_op_overloading print(const char * print_string)
		{
			i = 0;
			while (print_string[i])
			{
				putchar(print_string[i]);
				i++;
			}
			return *this;
		}
		*/
		void output()
		{
        		if (imaginary < 0)
            			cout << "Output Complex number: " << real << "-" << imaginary << "i\n";
       			else
            			cout << "Output Complex number: " << real << "+" << imaginary << "i\n";
    		}
	

};
/*
void operator << (bin_op_overloading target, const char * print_string)
{
	target.print(print_string);
			
}
*/
int main()
{
	bin_op_overloading bin1_op, bin2_op, result, bin3_op ,my_cout;

	cout << "Enter first complex number:\n";
	bin1_op.input();

	cout << "Enter 2nd complex number:\n";
	bin2_op.input();

	cout << "Enter 3nd complex number:\n";
	bin3_op.input();
	result = bin1_op + bin2_op + bin3_op;

	my_cout << "hello\n";

	result.output();
}