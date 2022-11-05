#include <bits/stdc++.h>
using namespace std;
int Degree(int n){
    if(n == 0) return 1;
    return 2 *(Degree(n - 1));
}
int main(){
    int n;cin >> n;
    cout << Degree(n);
}