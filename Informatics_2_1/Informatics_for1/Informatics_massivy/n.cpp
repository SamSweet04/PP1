#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    for(int i = (n - k) % n; i < n; i++){
        cout << a[i] << " ";
    }
    for(int i = 0; i < (n - k) % n; i++){
        cout << a[i] << " ";
    }
    return 0;
}