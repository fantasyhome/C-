#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1{1,2,3,4,5,6,7,8,9};
	vector<int>v2=v1;
	for(auto i:v1)
	cout<<i<<" "<<endl;
	for(auto i:v2)
	cout<<i<<" ";
	return 0;
	}