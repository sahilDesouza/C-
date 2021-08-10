

#include <iostream>
#include <vector>
using namespace std;

void print_vector_data(vector<int> data);

//similar to pass by reference
void update_value(int &a);
void push_elements_in_vector(vector<int> * array_vector, int size);
int main()
{
	std :: vector<int> n = {1, 2, 3, 4, 5};
	vector<int> data = {2, 10, 20, 50};
	int size = 2;

	//length of a vector
	cout << "SIZE: " << n.size() << endl;
	int a = 10;
	
	print_vector_data(data);
	//cout << "DATA: " << data.size() << endl;
	cout << "DATA: " << data[0] << endl;

	update_value(a);
	cout << "Value of A is:" << a << endl;

	vector<int> int_lists[size];

	
	push_elements_in_vector(int_lists, size);


}

void print_vector_data(vector<int> data)
{
	data[0] = 1;
	//cout << "DATA SIZE: " << data.size() << endl;
}
void update_value(int &a)
{
	a = 20;
}

void push_elements_in_vector(vector<int> * array_vector, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array_vector[i].push_back(j);
		}
		
		
	}
	for (int i = 0; i < size; i++)
	{
		for (auto j = array_vector[i].begin(); j < array_vector[i].end(); j++)
		{
			printf("Elements of vector[%d] -> %d\n", i, *j);
		}
		printf("\n");
		
		
	}

}
