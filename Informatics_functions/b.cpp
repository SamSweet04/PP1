#include <bits/stdc++.h>
using namespace std;
double power(double a,int n){
    double prod = 1;
    for(int i = 0;i < n;i++){
        prod *=a;
    }
    return prod;
}
int main(){
    double a ;
    cin >> a;
    int n;
    cin >> n;
    cout << power(a,n);
}