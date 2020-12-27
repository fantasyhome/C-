#include<iostream>
using namespace std;
class complex
{
	public:
	complex(){real=0;imag=0;}
	complex(double r,double i){real=r;imag=i;}
	complex operator+(complex &c2)
	{
		complex c;
		c.real=real+c2.real;
		c.imag=imag+c2.imag;
		return c;
		}
	void display()
	{
		cout<<"("<<real<<","<<imag<<"i)"<<endl;
		}
		private:
		double real;
		double imag;
	};
int main()
{
	complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	cout<<"c1+c2=";c3.display();
	}