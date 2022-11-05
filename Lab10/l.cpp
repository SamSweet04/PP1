#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; int cnt=0;
    cin>>n;
    int m=n;
    while(m>0){ // 5 4 3 2 1
        cnt+=m; // cnt = 5 cnt = 9 cnt = 12 cnt = 14 cnt = 15
        m--; // m = 4 m = 3 m = 2 m = 1 m = 0
    }
    vector <int> v(cnt);
    int p=0; // p = 1 p = 2
    for(int i=1;i<=n;++i){ // (1 - 3)&2 (2 - 5)*3 
        fill(v.begin()+p,v.begin()+p+i,i);
        p+=i;
        
    }
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }

}