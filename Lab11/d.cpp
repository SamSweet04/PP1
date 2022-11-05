#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
int arr[n][m];
bool ok = false;
for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) cin >> arr[i][j];
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] == 4) ok = true;
        else if(arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] == 0) ok = true;
    }
}
if(ok) cout << "NO";
else cout << "YES";
}
