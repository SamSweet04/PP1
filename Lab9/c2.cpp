#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector <int > v;
    vector <int > cnt;
    int num;
    for(int i = 0; i < n;i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    int counter = 0;
    for(int i = 0; i < v.size();i++){
        if(v[i] == v[i + 1]) counter ++;
        else {
            if(counter != 0) cnt.push_back(counter);
            counter  = 0;
            }
        }
        cout << cnt.size();
    }