#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n , x , k;
    cin >> n >> k;
    int cnt = 0;
    vector<int> v;
    for(int i = 0;i < n;i++){
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0;i < n;i++){
        if(v[i] == k){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}