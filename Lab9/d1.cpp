#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,cnt = 0;
    cin >> n >> k;
    vector <int > v;
    int num;
    while(n--){
        cin >> num;
        v.push_back(num);

    }
    for(int i = 0;i < v.size();i++){
       if(v[i] == k) cnt++;
    }
    cout << cnt;
}