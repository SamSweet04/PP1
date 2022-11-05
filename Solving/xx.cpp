#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string,int> m;
    while(n--){
        int n;
        string s;
        cin >> s >> n;
        m[s]+=n;
    }
    for(auto i : m){
        cout << i.first << " " << i.second  <<endl;
    }
    cout << endl;
}