#include <bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin >> s;
     map <char, int> mp;
     for(int i = 0;i < s.size();i++){
         if(s[i] >= 'A' && s[i] <= 'D')
         mp[s[i]]++;
     }
     for(auto i : mp){
         cout << i.first << " " << i.second << endl;
     }
}