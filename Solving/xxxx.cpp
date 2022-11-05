#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string t;
    cin >> s >> t;
    vector <string> v;
    v.push_back(t);
    sort(v.begin(),v.end());
    do{
        for(int i = 0;i < v.size();i++){
            if(s == v[i]) cout << "YES";
            cout << v[i];
        }
    }
    while(next_permutation(v.begin(),v.end()));
    cout << "NO";
}