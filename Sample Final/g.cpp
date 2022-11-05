#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    int cnt = 0;
    int mx = v[0];
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < v.size(); i++){
        if(mx < v[i]) mx = v[i];
    }
    for(int i = 0; i < v.size(); i++){
        if(mx == v[i]) cnt++;
    }
    cout << cnt;
    return 0;
}