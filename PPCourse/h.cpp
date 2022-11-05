#include <bits/stdc++.h>
using namespace std;
int main(){
   vector <int> v;
   int n,sum = 0;
   cin >> n;
   for(int i = 0; i < n;i++){
       int num;
       cin >> num;
       v.push_back(num);
   }
   for(auto &x : v){
      sum += x;      
   }
   cout << (double)sum / n;


}