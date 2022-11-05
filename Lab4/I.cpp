//Don’t wanna be perfect
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            if(sqrt(a[i][j]) == floor(sqrt(a[i][j]))){
                a[i][j] = sqrt(a[i][j]);
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){

//     int n, m, perfect; cin >> n >> m;
//     int arr[n][m];

//     for(int i = 0; i < n; i ++){
//         for(int j = 0; j < m; j++){
//             cin >> arr[i][j];
//             perfect = sqrt(arr[i][j]);
//             if(perfect * perfect == arr[i][j]) arr[i][j] = sqrt(arr[i][j]);
//         }
//     }

//     for(int i = 0; i < n; i ++){
//         for(int j = 0; j < m; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }