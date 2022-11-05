#include <iostream>
using namespace std;
int main(){
    int n; cin >>n;
    int a[n]; 
    for (int i=0; i<n; i++) cin >> a[i];
    int b[n];
    for (int i=0; i<n; i++) cin >> b[i];
    long long sum=0;
    for (int i=0; i<n; i++) sum+=a[i]-b[i];
    cout <<sum;
    return 0;
}