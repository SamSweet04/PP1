//Problem K. 74497. Sum of elements
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        long long sum = 0;
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            sum += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum << endl;
    }
    for(int i = 0; i < m; i++){
        long long sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum << endl;
    }
}

