#include <bits/stdc++.h>
using namespace std;
double power(double a , int n){
    double prod = 1;
    for(int i = 0; i < abs(n);i++){
        prod *= a;
    }
    if(n > 0) return prod;
    else return 1 / prod;
}
int main(){
    double a;
    cin >> a;
    int n;
    cin >> n;
    cout << power(a,n);
}