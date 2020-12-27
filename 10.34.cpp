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
    vector<string> vec = {"clearlove", "iboy", "martin"};
    for (auto it = vec.crbegin(); it != vec.crend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}