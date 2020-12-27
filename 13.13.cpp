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

struct X{
    X() { cout << "X()" << endl; }
    X(const X &x) {    cout << "X(const X &x)" << endl; }
    X& operator=(const X &x)
    {
        cout << "operator=(const X &x)" << endl;
        return *this;
    }
    ~X(){ cout << "~x()" << endl; } 
};

int main()
{
    //默认构造函数 
    X x1;
    X *p = new X();
    //拷贝构造函数 
    X x2(x1);
    X x3 = x1;
    X *q = new X(x1); 
    //拷贝赋值运算符 
    x3 = x2;
    //析构函数 
    delete p;
    delete q;
    return 0;
}