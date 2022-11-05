// Sharky and primes
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    int cnt = 0;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) cnt++;
    }
    return cnt == 0;
}
int main(){
     int n;
     cin >> n;
     vector <int> v;
     for(int i = 2; i < n;i++){
         if(isPrime(i)) v.push_back(i);
     }
     for(int i = 0; i < v.size();i++){
         for(int j = 0; j < v.size();j++){
             if(v[i] + v[i + j] == n){
                 cout << v[i] << " " << v[i + j];
                 return 0;
             }
         }
     }
}
/*int n; cin >> n;
int i = 2;
while(true){
    int check = n - i;
    if(isPrime(check) && isPrime(i)){
        cout << i << " " << check;
        return;
    }
    i++;
}
}
*/