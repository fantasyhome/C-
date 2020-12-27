#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string s("hello world!*#/");
//decltype(s.size()) punct_cnt=0;
string::size_type punct_cnt=0;	//decltype返回类型(即string::size_type)
	for(auto c : s)	//每次迭代，前一部分被初始化为后一部分的下一个元素值
	if(ispunct(c))
	++punct_cnt;
	cout<<punct_cnt<<" punctuation in "<<s<<endl;
	return 0;
	}