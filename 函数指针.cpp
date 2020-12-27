#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <iterator>
#include <initializer_list>
#include <cassert>

using namespace std; 

int fun1(int a, int b)
{
    return a + b;
} 

int fun2(int a, int b)
{
    return a - b;
}

int fun3(int a, int b)
{
    return a * b;
}

int fun4(int a, int b)
{
    return a / b;
}
typedef decltype(fun1) *pfunc;    //pfunc为指向函数的指针 
vector<pfunc> vec;

int main()  
{     
    vec.push_back(fun1);
    vec.push_back(fun2);
    vec.push_back(fun3);
    vec.push_back(fun4);
    for (auto function : vec)
        cout << function(3, 2) << endl;
    return 0; 
}