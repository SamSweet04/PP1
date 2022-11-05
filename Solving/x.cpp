#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
     for(int i = 0; i < n;i++){
        int d = count(a,a+2*n,x);
        for(int j = 0; j < n;j++){
       