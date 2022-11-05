#include <bits/stdc++.h>
using namespace std;
string Unique_divider(int n){
     if(n == 1) return "Yes";
     if(n % 2 != 0) return "No";
     return Unique_divider(n / 2);
}
     int main(){
         int n;
         cin >> n;
         cout << Unique_divider(n);
     }