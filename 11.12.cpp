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
#include <map>
#include <set> 
#include <cctype>
 
using namespace std;
using namespace std::placeholders;

int main()
{
    vector<pair<string, int>> vec;
    pair<string, int> pa;
    string ss;
    int i;
    while (cin >> ss >> i) {
        pa.first = ss;
        pa.second = i;
        vec.push_back(pa);
    }
    for (auto &i : vec) {
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}