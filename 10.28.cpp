#include <iostream>
#include <fstream>
#include <iterator>
#include <vector> 
#include <string>
#include <deque>
#include <list> 
#include <forward_list>
#include <stack>
#include <queue>
#include <algorithm> 
#include <functional>
 
using namespace std;
using namespace std::placeholders;

int main()
{
    vector<int> vec = {1, 2, 3, 3, 4, 3, 5, 7, 9};
    list<int> lst,lst1,lst2;
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    //可见俩个连续的3不会拷贝，不连续的第二个3会拷贝
    copy(vec.begin(), vec.end(), front_inserter(lst1));
    copy(vec.begin(), vec.end(),inserter(lst2,lst2.begin()));
    for (auto i : lst)
        cout << i << " ";
        cout<<endl;
    for (auto i : lst1)
        cout << i << " ";
        cout<<endl;
    for (auto i : lst2)
        cout << i << " ";
        cout<<endl;
    cout << endl;
    return 0;
}