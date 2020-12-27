#include<iostream>
using namespace std;
int main()
{
	cout<<("test a","test b");	/*逗号运算符先对左侧表达式求值，然后将求值结果丢弃，其真正结果为右侧表达式的值（注意逗号表达式优先级比<<低，不加括号输出为a）*/
	return 0;
	}