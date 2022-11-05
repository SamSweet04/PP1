#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n, x;
    cin >> n >> x;
    int num;
    for(int i = 0; i < n;i++){
        cin >> num;
        v.push_back(num);
    }
    reverse(v.begin(),v.end());
    rotate(v.begin(),v.end() - x,v.end());
for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
}