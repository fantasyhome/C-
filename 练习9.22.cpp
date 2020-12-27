#include<iostream>
#include<vector>
using namespace std;
int main()
{
int some_val = 1;
vector<int> iv{0,1,2,3,4};
auto iter = iv.begin();
int i = 0, mid = iv.size() / 2;
while (i != mid) 
{
    if (*iter == some_val) 
    {
        iter = iv.insert(iter, 2 * some_val);
        ++iter;    //将iter指向原来指向的元素的后一个元素
         for (vector<int>::iterator it = iv.begin(); it !=iv.end(); ++it)
{ 
        cout << *it << endl;
} 
    }
    else ++iter;
    ++i;
}
cout<<"succeed";
return 0;
}