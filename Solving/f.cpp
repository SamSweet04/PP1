#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
int arr[n][n];
for(int i = 0; i < n;i++){
    for(int j = 0;j < n;j++){
        cin >> arr[i][j];
    }
}
int k;
cin >> k;
int m,a,b,v;
for(int i = 0; i < k;i++){
    cin >> m >> a >> b >> v;
}
for(int i = 0;i < n;i++){
    for(int j = 0; j < n;j++){
        fill(arr[m][a],arr[m][b],v);
    }
}
for(int i = 0; i < n;i++){
    for(int j = 0;j < n;j++){
        cout << a[i][j] << " ";
    }
    cout << endl;
}
}

