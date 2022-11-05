#include <iostream>
using namespace std;
int main(){
    int n, pos_row = 1, pos_col = 1;
    cin >> n;
    int a[n][n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int max = a[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j){
                if(a[i][j] > max){
                    max = a[i][j];
                    pos_row = i;
                    pos_col = j;
                }
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << pos_row << ";" << pos_col;
}