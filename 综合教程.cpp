#include<iostream>
using namespace std;
class Point
{
	public:
	Point(float x=0,float y=0);
	void setPoint(float a,float b);
	float getX()const{return x;}
	float getY()const{return y;}
	friend ostream & operator << (ostream &,const Point &);
	protected:
	float x,y;
};
Point::Point (float a,float b)
{x=a;y=b;}
void Point::setPoint(float a,float b)
{x=a;y=b;}
ostream & operator << (ostream &output,const Point &p)
{output<<"["<<p.x<<","<<p.y<<"]"<<endl;return output;}	
class Circle:public Point
{
	public:
	Circle(float a=0,float b=0,float r=0):Point(a,b),radius(r){}
	void setRadius(float r)
	{radius=r;}
	float getRadius()const{return radius;}
	float area()const{return 3.1415926*radius*radius;}
	friend ostream &operator<<(ostream &output,const Circle &c)
	{
		output<<"center=["<<c.x<<","<<c.y<<"],r="<<c.radius<<",area="<<c.area()<<endl;
		return output;
		}
	public:
	float radius;
	};
	class Cylinder:public Circle
	{public:
	Cylinder(float a=0,float b=0,float r=0,float h=0):Circle(a,b,r),height(h){}
	void setHeight(float h){height=h;}
	float getHeight()const
		{return height;}
	float area()const{return Circle::area()+2*3.1415926*radius*height;}
	float volume()const
	{return Circle::area()*height;}
	friend ostream& operator<<(ostream&,const Cylinder&);
	protected:
	float height;
		};
	ostream& operator<<(ostream & output,const Cylinder& cy)
	{output<<"center=["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height<<"\narea="<<cy.area()<<",volume="<<cy.volume()<<endl;
	return output;}

int main()
{
	Point p(3.5,6.4);
	cout<<"x="<<p.getX()<<",y="<<p.getY()<<endl;
	p.setPoint(8.5,6.8);
	cout<<"p(new):"<<p<<endl;
	Circle c(3.5,6.4,5.2);
	cout<<"original circle:\nx="<<c.getX()<<",y="<<c.getY()<<",r="<<c.getRadius()<<",area="<<c.area()<<endl;
	c.setRadius(7.5);
	c.setPoint(5,5);
	cout<<"now circle:\n"<<c;
	Cylinder cy1(3.5,6.4,5.2,10);
	cout<<"original cylinder:\nx="<<cy1.getX()<<",y="<<cy1.getY()<<",r="<<cy1.getRadius()<<",h="<<cy1.getHeight()<<"\narea="<<cy1.area()<<",volume="<<cy1.volume()<<endl;
	cy1.setHeight(15);
	cy1.setPoint(5,5);
	cy1.setRadius(7.5);
	cout<<"\nnew cylinder:\n"<<cy1;
	Point &pRef=cy1;
	cout<<"\npRef as a point:"<<pRef;
	Circle &cRef=cy1;
	cout<<"\ncRef as a Circle:"<<cRef;//5.7派生类当做基类赋值
	return 0;
	}