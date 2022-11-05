#include <bits/stdc++.h>
using namespace std;
long long rec(long long a,int n){
    if(n == 0) return a;
    a = a * n;
    return rec(a,n - 1);
}
int main(){
    int n;
    cin >> n;
    long long a = 1;
    cout << rec(a,n);
}
