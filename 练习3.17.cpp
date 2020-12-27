
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{	
	vector<string> My_vector;
	string istring;
	for (int i=0;i<4;i++)
	{
		cin >> istring;
		My_vector.push_back(istring);
	}
	for (int i = 0;i < My_vector.size();i++)
		for (int j = 0;j < My_vector[i].size();j++)
		{
			My_vector[i][j] = toupper(My_vector[i][j]);
			/*创建字符串的容器，相当于第几个字符串为数组的一维，字符串的第几个字符为数组的二维*/
		}
	for (int i = 0;i < My_vector.size();i++)
	{
		cout<<My_vector[i]<<endl;
	}
	return 0;
}