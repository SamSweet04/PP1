// To drop or not to drop?
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, min; 
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int summ[n];
    for(int i = 0; i < n; i++){
        long long sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        if(i == 0){
            min = sum;
        }
        if(sum < min){
            min = sum;
        }
        summ[i] = sum;
    }
    for(int i = 0; i < n; i++){
        if(summ[i] == min){
            cout << i + 1;
            break;
        }
    }
    
}
// 3 4
// 0 78 2 3
// 9 7 32 6
// 67 3 29 2


// 2