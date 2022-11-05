#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    vector <int> m;
    bool ok = false;
    for(int i = 0; i < n;i++){
       int num;
       cin >> num;
       v.push_back(num);
       m.push_back(num);
    }
    reverse(v.begin(),v.end());
    for(int i = 0; i < v.size();i++){ 
        if(v[i] == m[i]) cout << "OK\n"; 
        else cout << "Instead of" << " " << m[i] << " " << "here was" <<" " << v[i] << endl; 
    }
}