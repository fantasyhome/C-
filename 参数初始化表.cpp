#include<iostream>
using namespace std;
class box
{
public:
box(int h=10,int w=12,int len=15):height(h),width(w),length(len){}/*构造函数参数列表内数值为默认值，默认值或者传递值进入构造函数后，引号后参数初始化表用来根据形参给数据成员初始化*/	
int volume();
private:
int height;
int width;
int length;
};
int box::volume()
{return(height*width*length);}
int main()
{
	box a[3]={//对象数组：3个同类对象
		box(10,12,15),//构造函数，提供第一个元素的形参，后面类推
		box(15,18,20),
		box(16,20,26)
		};
cout<<"volume of a[0] is"<<a[0].volume()<<endl;		cout<<"a[1]"<<a[1].volume()<<endl;	cout<<"a[2]"<<a[2].volume()<<endl;
	}