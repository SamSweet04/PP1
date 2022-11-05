#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,d,c,di,ci;
    cin >> d >> c >> n >> di >> ci;
    c = (c + d * 100)* n;
    ci = ci + di * 100;
    if(ci - c < 0){
        cout << -1 << endl;
    }else {
        ci -= c;
        cout << ci / 100 << " " << ci % 100;
    }
}