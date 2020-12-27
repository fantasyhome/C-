#include<iostream>
#include<memory>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string a="hello",b="world";
    char *p=new     char[a.size()+b.size()];
    strcpy(p,(a+" "+b).c_str());
    cout<<p;//估计有重载
    delete p;
	return 0;
	}