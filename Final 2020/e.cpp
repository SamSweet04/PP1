#include <bits/stdc++.h>
using namespace std;
multimap<string, string> mp;
set<string> st,magaz;


int main(){
int n, m;
cin >> n;

for(int i = 0; i < n; i++){
    string s; cin >> s;
    magaz.insert(s);
}
cin >> m;
for(int i = 0; i < m; i++){
    string s, t; cin >> s >> t;
    mp.insert({s, t});
}
string ingredient; cin >>ingredient;
for(auto i : mp){
    if(i.first == ingredient){
        if(magaz.find(i.second) != magaz.end()){
            st.insert(i.second);
        }
    }
    else if(i.second == ingredient){
        if(magaz.find(i.first) != magaz.end()){
            st.insert(i.first);
        }
    }
}
cout << st.size() << "\n";
for(auto i : st) cout << i << " ";
}
