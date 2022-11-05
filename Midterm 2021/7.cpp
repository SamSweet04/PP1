#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,n,b,k;
    cin >> a >> n >> b >> k;
    int arr1[8],arr2[8];
    for(int i = 0;i < 8;i++){
        arr1[i] = a % 2;
        a /= 2;
    }
     for(int i = 0;i < 8;i++){
        arr2[i] = b % 2;
        b /= 2;
    }
    if(arr1[n] == arr2[k]) cout << "Thunderclap and Flash";
    else cout << "Thunder Breathing... First form...";
}