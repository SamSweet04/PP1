// required to solve
#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <queue>
using namespace std;
long long binpow(int a, int n){
    
    if(a == 1) return a;
    if(n == 1) return a;
    if(n % 2 == 0){
        long long t = binpow(a, n / 2);
        return t * t;
    }
    return a * binpow(a, n - 1);
}
int main(){
    
    int n;
    cin >> n;
    
    cout << 1 << ' ';
    for(int i = 1; i <= n; i++){
        cout << binpow(i, i) << ' ';
    }


    return 0;

}