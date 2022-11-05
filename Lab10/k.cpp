#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n < 0) n*= -1;
    if(n == 2 || n == 3) return true;
    if(n == 1 || n == 0) return false;
    for(int i = 2; i * i  <= n;i++){
        if(n % i == 0) return false;
    }
    return true;
}



int main(){
    int n;
    cin >> n;
    vector <int> v;
    int num;
    for(int i = 0; i < n;i++){
        cin >> num;
        v.push_back(num);
    }
    int cnt = count_if(v.begin(),v.end(),isPrime);
    cout <<cnt;
    return 0;
}