#include<iostream>
using namespace std;
class time
{
	public:
time(){minute=0;sec=0;}//默认构造函数
time(int m,int s):minute(m),sec(s){}//构造函数重载
time operator ++();
time operator ++(int);//c++约定，增加一个int形参就是后置自增运算符的重载
void display(){cout<<minute<<":"<<sec<<endl;}
private:
int minute;
int sec;	
	};
time time::operator++()
	{
		if(++sec>=60)
		{sec-=60;
		++minute;}
		return *this;//返回自加后的对象
		}
		time time::operator ++(int)
		{
			time temp(*this);//拷贝自增前对象
			sec++;
			if(sec>=60)
			{sec-=60;
			++minute;}
			return temp;//返回自增前对象
			}
		int main()
		{Time time1(34,59),time2;
		cout<<"time1:";
		time1.display();
		++time1;
		cout<<"++time1:";
		time1.display();
time2=time1++;//自增前对象的赋值赋给time
		cout<<"time1++:";
		time1.display();
		cout<<"time2:";
		time2.display();
		}