#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Prints
{
private:
	istream &is;
	string st;
public:
    Prints(istream &i=cin):is(i){}
    string operator()()
    {
    	if(is)
    	   {
    	   	getline(is,st);
           	return st;
    	   }
    	else 
       	return st;
    }
};
int main()
{
    Prints pt(cin);
    cout<<pt();
	return 0;
	}