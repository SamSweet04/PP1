#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    int x;
    int cnt = 0;
    vector<int > v;
    set<int> s;
    for(int i = 0;i < n;i++){
        cin >> x;
        v.push_back(x);
        s.insert(x);
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i < j && j <= n ){
                if(s.count(v[i]^v[j]) != 0){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}