#include <iostream>
using namespace std;
class rectangle
{
private:
int length,width,height;
public:
void put()
{
cin>>length;
cin>>width;
cin>>height;	
}
void display()
{	cout<<"体积="<<length*width*height<<endl;
}
};
int main()
{
	cout<<"输入长宽高："<<endl;
	rectangle r1;
	r1.put();
	r1.display();
	cout<<"输入长宽高："<<endl;
    rectangle r2;
    r2.put();
	r2.display();
	cout<<"输入长宽高："<<endl;
	rectangle r3;
    r3.put();
	r3.display();
	return 0;
}