#include "std_lib_facilities.h"

using namespace std;

struct B1 {
	virtual void vf()
	{
		cout << "B1::vf()" << endl;
	}
	void f()
	{
		cout << "B1::f()" << endl;
	}

};
struct D1 : B1 {
	void vf() override 
	{
		cout << "D1::vf()" << endl;
	}
	void f()
	{
		cout << "D1::f()" << endl;
	}
}


int main()
{
	
	

	return 0;
}
