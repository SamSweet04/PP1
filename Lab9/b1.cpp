#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,num;cin >> n;
    vector<int> even;
    vector<int> odd;
    for(int i = 0;i < n;i++){
        cin >> num;
    if(num % 2 == 0) even.push_back(num);
    else odd.push_back(num);
    }
    // sort(even.begin(),even.end(),greater <int>());// убывающий порядок
    sort(even.rbegin(),even.rend());
    sort(odd.begin(),odd.end());
    for(int  i = 0; i < even.size();i++){
        cout << even[i] << " ";
    }
    for(int i = 0; i < odd.size();i++){
        cout << odd[i] << " ";
    }
    return 0;
}