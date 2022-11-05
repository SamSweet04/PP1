#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    map<int ,int> k; 
    int x;
    for(int i = 0;i < n;i++){
        cin >> x;
        if(k.count(x) == 0)
            k.insert(make_pair(x,1));
        else{
            k[x] ++;
        }
    }
    int cnt=0;
    map <int,int> :: iterator it;
    for(it = k.begin();it != k.end();it++){
        if(it->second >= 2) cnt++;
    }
    cout << cnt;
}