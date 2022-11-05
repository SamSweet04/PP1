#include <bits/stdc++.h>
using namespace std;
int Bit(int x){
     int cnt = 0;
     while(x){
         if(x % 2 == 1) cnt++;
         x /= 2;
     }
     return cnt;
}
int main(){
    int x ;
    cin >> x;
   for(int i = 0; i < x;i++){

         cout << Bit(i)<<",";
     }
     cout << Bit(x);
 }
// #include <iostream>
// using namespace std;

// int main(){

//     int n; cin >> n;

//     for(int i = 0; i <= n; i++){
//         int num = i, cnt = 0;
//         while(num){
//             if(num % 2 == 1) cnt++;
//             num /= 2;
//         }
//         cout << cnt;
//         cout << (i != n ? "," : "");
//     }

//     return 0;
// }