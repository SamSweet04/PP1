#include <bits/stdc++.h>
using namespace std;
int main(){
    for(int i = 0; i < 4;i++){
        int x;
        char z;
        cin >> x;
        if(i != 3) cin >> z;
        if(x > 255 || x < 0){
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}