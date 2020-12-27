#include<iostream>
using namespace std;
int a[10];//函数外的数组值默认初始化为0
int main()
{
	int b[10]={0};
//	int a[10];
	for(int i=0;i!=10;i++)
	a[i]=i;
	for(int i=0;i!=10;i++)
	b[i]=a[i];
//	不初始化，函数内的数组内的值为未定义
	for(int j=0;j!=10;j++)
	cout<<a[j]<<" "<<b[j]<<" ";
	return 0;
	}