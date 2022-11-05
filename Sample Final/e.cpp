#include <bits/stdc++.h>
using namespace std;
int main(){
   int n, m;
   cin >> n >> m;
   vector <pair<int,int>> v;
   int num = 1;
   while(n --){
       int cnt = 0;
       for(int i = 0; i < m; i++){
           int x;
           cin >> x;
           if(x > 0){
               cnt++;
           }
       }
        v.push_back({cnt,num});
        num ++;
   }
       for(int i = 1; i < v.size();i++){
           if(v[i].first > v[i - 1].first){
           cout << v[i].second;
           return 0;
           }
           if(v[i].first < v[i - 1].first){
               cout << v[i - 1].second;
               return 0;
           }
       }
       cout << "Numbers are equal";
   }
