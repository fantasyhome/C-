#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int *ip=&a;
	char *pc=reinterpret_cast<char*>(ip);
	string str(pc);
	cout<<str;
	return 0;
}
///*注释对/**/不能嵌套*/