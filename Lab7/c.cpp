#include <bits/stdc++.h>
using namespace std;
bool isInArra(int a[],int n,int x){
    n --;
    if(n <  0){
        return false;
    }
    if(a[n] == x){
        return true;
    }
    return isInArra(a,n,x); 
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    if(isInArra(a,n,x)){
        cout << "Yes"; 
    }
    else cout << "No";
  }