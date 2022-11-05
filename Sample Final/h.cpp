#include <bits/stdc++.h>
using namespace std;
int main(){
    int d, m, y;
    cin >> d >> m >> y;
    if(d == 31 && m == 12){
        cout << 1 <<" " << 1 << " " << y + 1;
        return 0;
    }
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d == 31){
            m += 1;
            d -= 30;
        }
        else d += 1;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d == 30){
            m += 1;
            d -= 29;
        }
        else d += 1;
    }
    else if(m == 2){
        if(d == 28){
            m += 1;
            d -= 27;
        }
        else d += 1;
    }
    cout << d << " " << m << " " << y;
}