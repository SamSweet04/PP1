#include <bits/stdc++.h>
using namespace std;
int main(){
     string m = "";
     string s;
     while(cin >> s){
         if(s.size() > m.size()) m = s;
     }
     cout << m;
}