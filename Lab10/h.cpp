#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    int x;
    for(int i = 0;i < n;++i){
        cin >> x;
        if(v.empty()) v.push_back(x);
        else if(find(v.begin(),v.end(),x) == v.end())
        v.push_back(x);
    }
    do{
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
            cout << endl;
    }
    while(next_permutation(v.begin(),v.end()));
}