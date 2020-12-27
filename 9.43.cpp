#include <iostream>
#include <iterator>
#include <vector> 
#include <string>
#include <deque>
#include <list> 
#include <forward_list>
  
using namespace std;
 
void func(string &s, string oldVal, string newVal)
 {
  auto it = s.begin();
  while (it != s.end())
   {
  auto iter = it;
  auto it1 = oldVal.begin();
  while (*it1 == *iter && it != s.end() && it1 != oldVal.end())
   {
             ++iter;
             ++it1;
         }
 if (it1 == oldVal.end())
    /*  {
   it = s.erase(it, iter);
 auto itt = newVal.end() - 1;
   while (itt != newVal.begin() - 1)            {
         it = s.insert(it, *itt);
                 --itt;
             }
             it += newVal.size();
       }*/
       {
       s.replace(it,iter,newVal);
       it+=newVal.size();
       }
         else
             ++it; 
     }
}
  
 int main()
 {
   string s = {"thot thru wtho"};        func(s, "tho", "though");
   cout << s << endl;
    
 }  