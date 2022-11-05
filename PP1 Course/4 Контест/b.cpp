//Палиндромность
#include <iostream>
using namespace std;

int main(){
    bool d =false;
    int n; cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];

     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
         if( i == j and arr[0][0] == arr[n - 1][n - 1]) d =true;
}
}
    if(d) cout << "YES";
    else cout << "NO";
    return 0;
}