#include <bits/stdc++.h>
using namespace std;
int main(){
    int a , b , k , cnt = 0 ;
    cin >> a >> b >> k;
   for(int i = min(a,b); 1 <= i;i--){
        if(a % i == 0 and b % i == 0) cnt++;
        
        if(cnt == k) {
        cout << i;
        return 0;
        }
   }
 }
