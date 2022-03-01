#include "../std_lib_facilities.h"

using namespace std;

class B1
	{
	public:
		virtual void vf()
		{
			cout << "B1/vf()" << endl;
		}
		void f()
		{
			cout << "B1/f()" << endl;
		}

		virtual void pvf() =0;
	};

	class D1 : public B1
	{
	public:
		void vf() override
		{
			cout << "D1/vf()" << endl;
		}
		void f()
		{
			cout << "D1/f()" <<endl;
		}

	};

	class D2 : public D1
	{
	public:
		void pvf() override
		{
			cout << "D2/pvf()" << endl;
		}
	};
	class B2
	{
	public:
		virtual void pvf() = 0;
	};

	class D21 : B2
	{
		string s = "valami string";
	public:

		void pvf () override
		{
			cout << s << endl;
		}
	};

	/*class D22 : B2
	{
	int number = 69;
	public:
	void pvf() override
		{
			cout << number << end;
		}
	};
	*/
	/*void f(B2& j)
	{
		j.pvf();
	}*/
	

int main()
{
 	
 	B1 valami;
 	valami.vf();
 	valami.f();

 	cout << endl;

 	D1 masvalami;
 	masvalami.vf();
 	masvalami.f();

 	cout << endl;

 	/* B1& x {masvalami};
 	x.vf();
 	x.f();
	*/ //Nem jó!

	cout << endl;
/*
	D2 y;
	y.vf();
	y.f();
	y.pvf();	
	*/
	cout << endl;

	//D21 to;
	//D22 tt;
	//f(to);
	//f(tt);




	return 0;
}