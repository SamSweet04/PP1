#include <bits/stdc++.h>
using namespace std;
bool DegTwo(int n){
    if(n==3||n==5||n==7||n==9){
    return false;
    }
    if(n == 1){
    return true;
    }
    return DegTwo(n/2);
}
int main(){
    int n;
    cin >> n;
    if(DegTwo(n)) cout << "YES";
    else cout << "NO";
}