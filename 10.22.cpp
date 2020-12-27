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

string make_plural(size_t cnt, const string &s1, const string &ending)
{
    return (cnt > 1 ? s1 + ending : s1);
}

bool cmp(const string &s, int len)
{
    return s.size() <= len;
}

void biggies(vector<string> &words, vector<string>::size_type len)
{
    auto count = count_if(words.begin(), words.end(), bind(cmp, _1,len));
    cout << "There are " << count << " " << make_plural(count, "word", "s")
        << "'s length no longer than " << len << endl; 
}

int main()
{
    vector<string> vec = {"jensen", "clearlove", "scout", "iboy", "justin", "jackeylove", "rookie", "doinb", "peanut", "martin"};
    vector<string>::size_type len;
    biggies(vec, 6);
    return 0;
}