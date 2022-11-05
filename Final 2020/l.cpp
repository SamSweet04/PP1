//Chrono Crusader
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int min = 100000000;
        int t; cin >> t;
        int a[t];
        for(int j = 0; j < t; j++) cin >> a[j];
        for(int j = 0; j < t; j++){
            if((count(a, a + t, a[j])== 1 && a[j] < min)){
                min = a[j];
            }
        }
        for(int j = 0; j < t; j++){
            if(a[j] == min){
                cout << j + 1 << endl;
            }
        }
        if(min ==  100000000){
            cout << "ZA WARUDO"  << endl;
        }
    }
}