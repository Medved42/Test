#include<iostream>

using namespace std;

class Human {
private:
	string name;
	int age;
public:
	Human(string Name,int Age)
		:name{Name},age{Age}{}
	Human() : Human("No Name", 0) {}
	~Human() {
		cout << "User deleted from" << this << endl;
	}
	void Print() {
		cout << "Name is " << this->name << " Age is " << this->age << endl;
	}
	Human& SetName(string Name) { name = Name; return *this; }
	Human& SetAge(int Age) { age = Age; return *this; }
};

class Group {
private:
	int number;
	int id;
public:
	Group(int Number, int ID)
		:number{ Number }, id{ ID }{}
	Group() : Group(0, 0) {}
	~Group() {
		cout << "Group deleted from " << this << endl;
	}
	void Print() {
		cout << "Group Number is " << number << " ID is " << id << endl;
	}
	int SetNumber(int Number) {
		number = Number;
	}
	int SetId(int ID) {
		id=ID;
	}
};
int main() {

	Human nobody;
	nobody.Print();
	Human alex{ "Alex B", 31 };
	alex.Print();

	Group zero;
	zero.Print();
	Group g286{ 1, 55661 };
	g286.Print();

	Human loss;
	loss.SetName("Grigor").SetAge(27);
	loss.Print();


	return 0;
}