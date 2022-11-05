#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,prod = 1;
    cin >> n;
    int a[n];
    for(int i = 0; i <= n; i ++){
        a[i] = pow(2,i);
        cout << a[i] << endl;
    }
}