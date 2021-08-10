
#include <iostream>
using namespace std; 

class employee
{
	//write only members in public/private/protected
	//in function cout, cin etc
	public:
    	//employee(/* args */);
	int id;
	string name;
	string address;
	string company_names;
	static int n;

	// printname is not defined inside class definition 
    	void printname();

	//method prototype defined outside the class
	void company_name(string company_names);
	
	void get_details()
	{
		cout <<"Employee information\n";
		cout <<"id: "<< id << "\nName: " << name <<"\nAddress: "<< address << endl;
	}
    
};
//call function outside the class
//use scope resolution operator to view method outside the class
void employee :: company_name(string company_names)
{
	cout << "Company name is "<< company_names << endl;
}


int main()
{

	employee emp1;
	emp1.id = 10;
	emp1.name = "sahil";
	emp1.address = "Old chowgule college";
	emp1.company_names = "Tata Elxsi";
	emp1.get_details();
	emp1.company_name(emp1.company_names);

	cout <<"\nCopied class"<< endl;
	employee emp2 = emp1;
	emp2.get_details();
	emp1.company_name(emp2.company_names);
}


