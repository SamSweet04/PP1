#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    set <int> st;
    bool ok = false;
    map <char,int> mp;
    for(int i = 0; i < n;i++){
       cin >> s;
       for(int i = 0; i < s.size();i++){
           st.insert(s[i]);
       }
        for(auto t : st) mp[t]++;
        st.clear();
    }
    for(auto i : mp){
        if(i.second >= n){
            ok = true;
        }
    }
    if(ok){
        for(auto i : mp){
        if(i.second >= n){
            cout << i.first  << " ";
    }
        }
    }
    else cout << "NO COMMON CHARACTERS";
}

