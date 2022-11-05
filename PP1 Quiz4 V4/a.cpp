#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
map <int,int> m; 
int num;
while(n--){
    cin >> num;
    m[num]++;
}
for(auto i : m){
 if(i.second >= 2) cout << i.first;
}
}