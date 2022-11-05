#include <bits/stdc++.h>
using namespace std;
bool Election(bool x, bool y, bool z){
     int cnt = 0;
     bool arr[] = {x,y,z};
     for(int i = 0; i < 3;i++){
         if(arr[i]) cnt++;
     }
     if(cnt > 1) return true;
     return false;
}

int main(){
    bool x,y,z;
    cin >> x >> y >> z;
    if(Election(x,y,z)) cout << 1;
    else cout << 0;
}