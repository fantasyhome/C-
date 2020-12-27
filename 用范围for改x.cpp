#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string s("hello world!*#/");
	for(char c : s)	//每次迭代，前一部分被初始化为后一部分的下一个元素值
	if(!isspace(c))
    c={'x'};//别忘了给char型赋值用的c语言中数组类型赋值法：括号
	cout<<s<<endl;
	return 0;
	}