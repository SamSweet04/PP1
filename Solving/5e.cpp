#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <int,int> m;
    for(int i = 0; i < n;i++){
        int num;
        cin >> num;
        m[num]++;
    }
    int cnt = 0;
    for(auto i : m){
        if(i.second >= 3) cnt++;
    }
    cout << cnt;
}