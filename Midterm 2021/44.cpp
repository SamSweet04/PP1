#include <bits/stdc++.h>
using namespace std;
int n;

void ODD(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j >= n - 1) cout << '#';
            else cout << '.';
        }
        cout << '\n';
    }
}

void EVEN(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i) cout << '#';
            else cout << '.';
        }
        cout << '\n';
    }
}

int main(){
    cin >> n;
    n % 2 == 0 ? EVEN() : ODD();
}