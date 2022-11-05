#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int min = 99999,index;
    for(int i = 0; i < n;i++){
        if(abs(k - arr[i]) < min){
            min = abs(k - arr[i]);
            index = i;
        }
    }
    cout << index;
}