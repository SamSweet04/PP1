#include <bits/stdc++.h>
using namespace std;

int One_Bit_Count(int x){
    int cnt = 0;
    while(x){
        if(x % 2 == 1) cnt++;
        x /= 2;
    }
    return cnt;
}

int main(){
    int n; cin >> n;
    for(int i = 0; i < n + 1;i++){
     cout << One_Bit_Count(i);
}
}

#include <bits/stdc++.h>
using namespace std;
 
 int count(int x){
     int cnt = 0;
     while(x > 0){
         if(x % 2 == 1){
             cnt++;
         }
         x /= 2;
     }
     return cnt;
 }
 int main(){
     int n;cin >> n;
     for(int i = 0; i <= n; i++){
         cout << count(i);
     }
 }
