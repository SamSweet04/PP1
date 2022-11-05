#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int, int> m;
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int num;
        cin >> num;
        m[num]++;
    }
    int cnt = 0;
    for(auto &i : m){
        if(i.second >= 2) cnt++;
    }
    cout << cnt;
}