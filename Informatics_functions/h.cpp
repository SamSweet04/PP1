#include <bits/stdc++.h>
using namespace std;
int phi(int n){
    int a = 1,b = 1;
    for(int i = 1; i < n;i++){
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main(){
    int n;
    cin >> n;
    cout << phi(n);
    return 0;
}
// #include <iostream>
// using namespace std;

// int phi(int n){
//     int arr[n];
//     arr[0] = 1; arr[1] = 1;
//     for(int i = 2; i <= n; i++) arr[i] = arr[i - 1] + arr[i - 2];
    
//     return arr[n];
// }

// int main(){
//     int n; cin >> n;
//     cout << phi(n);
// }