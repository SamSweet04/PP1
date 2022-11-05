#include <bits/stdc++.h>
using namespace std;
bool Xor (bool x, bool y){
    if(x != y){
        return 1;
    }
    return 0;
    }
    int main(){
        bool x,y;
        cin >> x >> y;
        cout << Xor(x,y);
    }
// #include <iostream>
// using namespace std;

// bool Xor(bool x, bool y){
//     return x ^ y;
// }

// int main(){

//     int n, m; cin >> n >> m;
//     cout << Xor(n, m);
// }    