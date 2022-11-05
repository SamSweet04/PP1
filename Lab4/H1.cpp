#include <iostream>
using namespace std;

int main(){
    int n, m, min = 1e9; cin >> n >> m;
    int arr[n][m], summ[n];

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
        summ[i] = sum;
        if(summ[i] < min) min = summ[i];
    }

    for(int i = 0; i < n; i++){
        if(summ[i] == min){
            cout << i + 1;
            return 0;
        }
    }

}
