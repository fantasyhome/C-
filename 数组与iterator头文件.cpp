#include<iostream>
#include<iterator>
using namespace std;
void compare(int *begin_a,int *last_a,int *begin_b,int *last_b)
    {	if((begin_a-last_a)==(begin_b-last_b)) //事实证明负数也可以判断
       { 
	while((*begin_a)==(*begin_b))
	{++begin_a;
	++begin_b;}
	if(begin_a==last_a)
	cout<<"a==b";
	else cout<<"a!=b";
	}
	else cout<<"a!=b";
    }
int main()
{
	int a[10]={0},b[10]={0},c[9]={0};
	for(int i=0;i!=6;i++)
	{
		a[i]=i;
		b[i]=i;
		c[i]=i;
		}
	int *begin_a=begin(a);
	int *last_a=end(a);
	int *begin_b=begin(b);
	int *last_b=end(b);
	int *begin_c=begin(c);
	int *last_c=end(c);

    compare(begin_b,last_b,begin_a,last_a);
	return 0;
}