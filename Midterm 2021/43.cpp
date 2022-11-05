#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int summ[n];
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j =0; j < m;j++){
            cin >> a[i][j];
            sum+=a[i][j];
        }
        summ[i]=sum;   // 10  10  14
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            cout << summ[i] / m << " ";
            break;
        }
    }
}