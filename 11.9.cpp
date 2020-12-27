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
    map<string, list<int>> imap;
    imap = {{"kzw", {2, 3, 5}}, {"ly", {1, 4, 6}}};
    for (auto &i : imap) {
        for (auto &j : i.second) {
            cout << i.first << " occurs at line " << j << endl; 
        }
    }
    return 0;
}