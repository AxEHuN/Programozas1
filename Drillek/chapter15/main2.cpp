#include "std_lib_facilities.h"

struct Person{
	Person () {};
	Person	(string fname, string lname, int age);

	string get_fname() const {return fname;}
	string get_lname() const {return lname;}
	int get_age(){return age;}

private:
	string fname="Default";
	string lname="Default";
	int age=0;
};

	Person::Person(string fname, string lname, int age) : f{fname}, l{lname}, a{age}
	{
		if (age>150 || age <0) error("Bad age");
	}


int main()
{
	Person def;
	def.fname="Goofy";
	def.age=63;


	cout << def.fname << " " << def.age << endl;

	Person p1;
	cout << "Enter first name: ";
	cin >> p1.fname;
	cout << "Enter last name: ";
	cin >> p1.lname;
	cout << "Enter age: ";
	cin >> p1.age;
	cout << endl;


	cout << p1.get_name() << " " << p1.get_lname() << " " << p1.get_age() << endl;

return 0;
}