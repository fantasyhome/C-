#include <iostream>
#include <fstream>
#include <iterator>
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
 
using namespace std;
using namespace std::placeholders;

int main()
{
    multimap<string, string> mimap;
    string name1, name2;
    while (cin >> name1) {
        if (name1 == "eof") 
            break;
        cin >> name2;
        mimap.insert(make_pair(name1, name2));
    }
    cout << "请输入要删除作品的作者：";
    cin >> name1;
    auto it = mimap.find(name1);
    if (it != mimap.end()) {
        cout << "请输入要删除的作品名：";
        cin >> name2;
        auto mit = mimap.upper_bound(name1);
        while (it != mit) {
            if (it->second == name2) {
                mimap.erase(it);
                --it;
                break;
            }
            ++it;
        } 
        if (it == mit)    cout << "该作者没有此书！\n";
        else {
            for (auto &i : mimap) {
                cout << "作者：" << i.first << " 书名：" <<  i.second << endl; 
            }
        }
    }
    else {
        cout << "查无此作者！\n";
    }
    return 0;
}