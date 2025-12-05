#include <iostream>
#include <string>
using namespace std;

struct IPrint
{
	virtual void PrintConsole() = 0;
};



class Transport : public IPrint
{
protected:
	string model;
	double price;
public:
	Transport() { price = 0; }
	Transport(string m, double p)
	{
		model = m;
		price = p;
	}
};



class Auto : public Transport
{
	string color;
	double speed;
public:
	Auto() {}
	Auto(string c, double s)
	{
		color = c;
		speed = s;
	}
	virtual void PrintConsole()
	{
		cout << "Model\t" << model << "Price:\t" << price << "Color:\t" << color << "Speed:\t" << speed << endl;
	}
};

class Plane : public Transport
{
	int passangers;
	int wings;
public:
	Plane() {}
	Plane(int p, int w)
	{
		passangers = p;
		wings = w;
	}
	virtual void PrintConsole()
	{
		cout << "Model\t" << model << "Price:\t" << price << "Passangers:\t" << passangers << "Wings:\t" << wings << endl;
	}
};
















class Animal : public IPrint
{
protected:
	string name;
	int weight;
public:
	Animal() { weight = 0; }
	Animal(string n, int w)
	{
		name = n;
		weight = w;
	}
};




class Pinguin : public Animal
{
	
	double family;
	int weight;
public:
	Pinguin() {}
	Pinguin(double f, int w)
	{
		family = f;
		weight = w;
	}
	virtual void PrintConsole()
	{
		cout << "Name\t" << name << "Weight:\t" << weight << "Family:\t" << family << "Weight:\t" << weight << endl;
	}
};


class Dog : public Animal
{
	string breed;
	string sex;
public:
	Dog() {}
	Dog(string b, string s)
	{
		sex = s;
		breed = b;
	}
	virtual void PrintConsole()
	{
		cout << "Name\t" << name << "Weight:\t" << weight << "Sex:\t" << sex << "Breed:\t" << breed << endl;
	}
};



int main()
{
	IPrint* iprint = nullptr;

	int choice = 0;

	cout << "1. Auto" << endl;
	cout << "2. Plane" << endl;
	cout << "3. Pinguin" << endl;

	cout << "4. Dog" << endl;
	cout << "Make your choice: ";

	cin >> choice;

	switch (choice)
	{
	case 1:
		iprint = new Auto("Red", 220);
		break;
	case 2:
		iprint = new Plane(65, 2);
		break;
	case 3:
		iprint = new Pinguin(2, 25);
		break;
	case 4:
		iprint = new Dog("Female", "Taksa");
		break;
	}
	iprint->PrintConsole();
}