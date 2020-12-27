#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;    
using std::endl;
using std::vector;
using std::string;
template <typename T>
void print(vector<T> p)
{
	for (auto it = p.cbegin(); it != p.cend(); it++)    cout << *it << " ";    cout << endl;
	}
int main() 
{
    vector<int> v1, v2(10), v3(10,42), v4{10}, v5{10, 42};
    vector<string> v6{10}, v7{10, "hi"};
    if (v1.empty())    cout << "v1 is empty!";
    else  print(v1);
    print(v2);
    print(v3);
    print(v4);
    print(v5);
    print(v6);
    print(v7);
    return 0;
}