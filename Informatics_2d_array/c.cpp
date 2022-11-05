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
    int max_sum = 0, pos = 0;
    for(int i = 0; i < n; i++){
        int local_sum = 0;
        for(int j = 0; j < m; j++){
            local_sum += a[i][j];
        }
        if(local_sum > max_sum){
            max_sum = local_sum;
            pos = i;
        }
    }
    cout << max_sum << endl;
    cout << pos;
    return 0;
}