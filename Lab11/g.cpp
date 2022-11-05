#include<bits/stdc++.h>

using namespace std;

int main (){
    int n;
    cin >> n;
    map <string,set <int>> mp;
    for(int i = 0; i < n ;i++){
        string s;int n;
        cin >> s >> n;
        mp[s].insert(n);
    }
    for(pair<string,set<int>> i : mp ){
        cout << i.first << " ";
        if(i.second.size() >= 3){
            cout << "+1\n";
        }
        else cout << "NO BONUS\n";
    }
}