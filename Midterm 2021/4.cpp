#include <bits/stdc++.h>
using namespace std;
bool Power_two(int n){
    int prod = 1;
    while(prod < n){
        prod *= 2;
    }
    if(prod == n) return true;
    return false;
}
int main(){
    int s;
    cin >> s;
    int a[s];
    for(int i = 0;i < s;i++){
        cin >> a[i];
    }
    int n = a[0];
    for(int i = 1; i < s;i++){
        n = n ^ a[i];
    }
    cout << (Power_two(n) ? "YES" : "NO");
    }