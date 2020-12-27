#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <initializer_list>
#include <vector> 
#include <string>
#include <cstring>
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

void func()
{
    allocator<string> a;
    auto const pa = a.allocate(5);    //pa指向a分配的内存首部 
    auto q = pa;
    string s;
    while (q != pa + 5 && cin >> s) {
        a.construct(q++, s);
    }
    //q指向最后构造的元素之后的位置 
    while (q != pa) {
        --q;
        cout << *q << endl;
        a.destroy(q);        //销毁元素 
    }
    a.deallocate(pa, 5);     //释放内存 
}

int main()
{
    func();
    return 0;
}