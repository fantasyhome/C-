#include<iostream>
using namespace std;
int main()
{
    int a=0;
    char *p=new char[5];
    while(cin&&a!=5)
    {
    	cin>>p[a];
    	++a;
    	}
    	cout<<p;
	return 0;
	}