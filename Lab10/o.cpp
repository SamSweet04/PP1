#include <bits/stdc++.h>
using namespace std;
void Bin(int n){
    vector <int> bin;
    while(n > 0){
        bin.push_back(n % 2);
        n /= 2;
    }
    reverse(bin.begin(),bin.end());
    for(int  i = 0; i < bin.size();i++){
        cout << bin[i];
    }
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int num;
    vector <int> v;
    for(int i = 0; i < n;i++){
        cin >> num;
        v.push_back(num);
    }
    for_each(v.begin(),v.end(),Bin);
  
}