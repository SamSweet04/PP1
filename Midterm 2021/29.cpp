#include <bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin >> n;
     int  a = 2, d = 3;
     for(int i = 0; i < n; i++){
         cout << a << ' ';
         a = a + d;
     }
}