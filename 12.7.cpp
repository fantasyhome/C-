#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <initializer_list>
#include <vector> 
#include <string>
#include <deque>
#include <list> 
#include <forward_list>
#include <array>
#include <stack>
#include <queue>
#include <algorithm> 
#include <functional>
#include <map>
#include <set> 
#include <cctype>
#include <unordered_map>
#include <unordered_set>
#include <memory> 
#include <new> 
 
using namespace std;
using namespace std::placeholders;

shared_ptr<vector<int>> func()                //修改处1 
{
    return make_shared<vector<int>>();        //修改处2 
} 

void func2()
{
    int i;
    auto spv = func();    //即shared_ptr<vector<int>> spv = func(); 
    while (cin >> i) {
        (*spv).push_back(i);
    }
    for (auto &v : *spv)
        cout << v << " ";
    cout << endl;
}


int main()
{
    func2();
    return 0;
}