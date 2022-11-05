// Triangle

#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n + 1][n + 1];

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j++){
            arr[i][j] = 0;
            if(i + j == n + 1) arr[i][j] = 1;
            if(i == n) arr[i][j] = 1;
            if(j == n) arr[i][j] = 1;
        }
    }

    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//         if(i+1==n) cout << "1" << " "; //ен асты
//         else if(j==n-1) cout << "1" << " "; // ен шети
//         else if(i+j==n-1) cout << "1" << " "; // диагональ
//         else cout << "0" << " ";
//     }
//     cout << endl;
//     }
//     return 0;
// }