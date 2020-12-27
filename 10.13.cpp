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
 
using namespace std;

void print(auto beg,auto end)
{
    while (beg!=end) 
    {
        cout << *beg << " ";
        ++beg;
    }
    cout << endl;
}

bool cmp(const string &s)
{
    return s.size() < 5;
}

int main()
{
    vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    auto aft=partition(vec.begin(), vec.end(), cmp);        //会使让谓词为真的值排在容器的前半部分 
    print(aft,vec.end());
    return 0;
}  