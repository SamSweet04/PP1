// Transaction
#include <bits/stdc++.h>
using namespace std;
int main(){
    int c1, c2, c3, c4, c5, c6, c7;
    cin >>  c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7;
    c2 *= 2;
    c3 *= 5;
    c4 *= 10;
    c5 *= 20;
    c6 *= 50;
    c7 *= 100;
    int sum = c1 + c2 + c3 + c4 + c5 + c6 + c7;
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(sum >= a[i]){
            sum -= a[i];
            cout << "Transaction accepted!" << endl;
        }
        else cout << "Transaction stopped!" << endl;
    }
    
}