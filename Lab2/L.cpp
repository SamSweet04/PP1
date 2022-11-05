#include <bits/stdc++.h>

using namespace std;

    int main (){
        int n;
        cin>>n;
    for(int i=0;i<n;i++){
        int x;
        x=pow(2,i);
        if (x<=n){
            cout<<x<<"/n";        
    }
    else break;
    }