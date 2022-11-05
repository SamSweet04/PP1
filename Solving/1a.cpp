#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<int,int> m;
    int num,cnt;
    for(int i = 0; i < n;i++){
        cin >> num;
        m[num]++;
    }
    for(auto i : m){
        cout << i.first << "-" << i.second;
        cout << endl;
    }
}