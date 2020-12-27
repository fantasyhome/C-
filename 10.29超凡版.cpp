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
    vector<string> vec;
    ifstream in("word.txt");
    istream_iterator<string> it(in), eof;
    ostream_iterator<string> it2(cout, " ");
    copy(it, eof, back_inserter(vec)); 
    copy(vec.begin(), vec.end(), it2);
    return 0;
}