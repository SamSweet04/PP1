#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map <string , int> m;
    cin >> n;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        if(m[s] == 0){
            m[s] = i + 1;
        }
    }
    for(auto &i : m){
        cout << i.first << " " << i.second << endl;
    }
}