

#include <iostream>
#include <string.h>
using namespace std;


class Animal
{
	private:
		string type;
	public:
		Animal() : type("ANIMAL")
		{
			;
		}
		virtual void print_type()
		{
			cout << "type: " << type << endl;
		}

};

class Dog : public Animal
{
	private:
		string type;
	public:
		Dog() : type("DOG") 
		{
			;
		}
		void print_type() override
		{
			cout << "ANIMAL: " << type << endl;
		}
};

class Cat : public Animal
{
	private:
		string type;
	public:
		Cat() : type("Cat")
		{
			;
		}
		void print_type() override
		{
			cout << "ANIMAL: " << type << endl;
		}
};

void print_string(Animal * aptr);

int main()
{
	Animal * animal_ptr;
	Dog * dog_ptr = new Dog;
	Cat * cat_ptr = new Cat;

	/*
	//output will print of dog animal;
	animal_ptr = dog_ptr;
	animal_ptr->print_type();

	//output will print of dog animal;
	animal_ptr = cat_ptr;
	animal_ptr->print_type();
	*/
	print_string(cat_ptr);
	print_string(dog_ptr);
}
void print_string(Animal * aptr)
{
	aptr->print_type();
}