#include <bits/stdc++.h>
using namespace std;
bool isSorted(int n,int a[]){
    bool ok =true;
    for(int i = 0;i < n;i++){
        for(int j =i + 1;j < n;j++){
            if(a[i] > a[j]){
                ok = false;
                break;
            }
        }
    }
    if(ok==false) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    if(isSorted(n,a)==true)cout << "Sorted";
    else cout <<"Not sorted";

}