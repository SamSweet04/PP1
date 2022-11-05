//Statue
#include <iostream>
#include <algorithm>
using namespace std;
int main(){        
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    sort(a, a + n);
        for(int i = 1;i < n; i++){
            if(a[i] - a[i - 1] != 1){
                cnt += a[i] - a[i - 1] -  1;
            }
        }
     cout << cnt;
 
}
// // Statue

// #include <iostream>
// using namespace std;

// int main(){

//     int n, max = -1e9, min = 1e9, cnt = 0, cnt1 = 0; cin >> n;
//     int arr[n + 1];

//     for(int i = 1; i <= n; i++){
//         cin >> arr[i];
//         if(max < arr[i]) max = arr[i];
//         if(min > arr[i]) min = arr[i];
//     }

//     for(int i = min; i <= max; i++){
//         cnt1++;
//         for(int j = 1; j <=  n; j++){
//             if(arr[j] != i) cnt++;
//         }
//     } 
//     cout << cnt % cnt1;
// }