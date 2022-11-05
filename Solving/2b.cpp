#include <bits/stdc++.h>
using namespace std;
void Divisor(int n){
    int cnt = 0;
    for(int i = 0;i <= n;i++){
        if(n % i == 0) cnt++;
    }
    cout << cnt;
}
int main(){
    int n;
    cin >> n;
    map<int,int> m;
    int num,cnt;
    for(int i = 0;i < n;i++){
        cin >> num;
        
    }