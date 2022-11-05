#include <bits/stdc++.h>
using namespace std;
void Bin(int n){
    if(n == 0){
     return;
    }
    Bin(n / 2);
    cout << n % 2;
}
int main(){
    int n;
    cin >> n;
    Bin(n);
}