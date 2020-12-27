#include<iostream>
#include<vector>
#include<fuctional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    vector<int> v1{34.345.8888};
    int num=count_if(v1.begin,v1.end,bind(greater<int>(),_1,1024));
    cout<<num;
	return 0;
	}