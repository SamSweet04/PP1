#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--){    // 1 3 5 7 9
        cout << a[i] << " ";
    }
}
//Reverse
//4
//-13 5 -7 -15

///-15 -7 5 -13
