#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    map <int,int> m;
    for(int i = 0; i < n;i++){
        int num;cin >> num;
        m[num]++;
    }
    int q;cin >> q;
    bool ok = false;
    for(int i = 0;i < q;i++){
        int banknote;cin >> banknote;
        if(m[banknote]) ok = true;
    }
    for(auto i : m){
        if(ok) cout << i.second << endl;
        else cout << 0;
    }
}