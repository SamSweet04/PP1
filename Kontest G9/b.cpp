#include <bits/stdc++.h>
using namespace std;
set <int> s;
vector <int> v;
bool Prime(int n){
    for(int i = 0; i * i <= n;i++){
        if(i % n == 0) return false;
    }
   return true;
}
bool Dvoika(int n){
    for(int i = 2; i <= n;i*=2){
        if(i % n == 0) return true;
    }
    return false;
}
bool Troika(int n){
    for(int i = 3; i <= n; i*=3){
        if(i % 3 == 0) return true;
    }
    return false;
}
int main(){
    int n;
    int i = 0;
    while(cin >> n){
        s.insert(n);
        v.push_back(n);
    }
    bool ok = false;
    for(auto i : s){
        if(i == v[i]) ok = true;
        else ok = false;
    }




    
}