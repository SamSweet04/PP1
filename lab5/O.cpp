//Problem O. 74866.Last
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
     cout << s[s.size()-1];
  
}