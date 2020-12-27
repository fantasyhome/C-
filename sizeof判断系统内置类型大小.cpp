#include<iostream>
using namespace std;
int main()
{
	int x[10];
	int *p=x;
	cout<<sizeof(p)/sizeof(*p);	//我们系统里int型指针占8个空间，int占4空间
	return 0;
	}