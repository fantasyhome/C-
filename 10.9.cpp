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
  
 using namespace std;
 
 void print(vector<string> &words)
 {
     for (auto &i : words) {
         cout << i << " ";
     }
     cout << endl;
 }
 
 void elimDups(vector<string> &words)
 {
     sort(words.begin(), words.end());
     print(words);
     auto end_unique = unique(words.begin(), words.end());
     print(words);
     words.erase(end_unique, words.end());
     print(words);
 }
 
 int main()
 {
     vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
     print(vec);
     elimDups(vec);
     return 0;
 }  