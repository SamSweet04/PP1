#include <bits/stdc++.h>
using namespace std;
 
int maxDigit(long long int n, int max){
    if(n == 0)
        return max;
    if(max < n % 10){
    max = n % 10;
    return maxDigit(n / 10, max);
    }
    else {
        return maxDigit(n / 10, max);
    }
}
int main(){
    long long int n;
    cin >> n;
    cout << maxDigit(n , 0);
}