#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int max = 0, x = 0, y = 0;
    for(int i = 0; i < n; i++){ 
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << max << endl;
    cout << x << " " << y;
    return 0;
}