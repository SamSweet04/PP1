#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    int area = 0;
    int cnt = 0;
    vector <int> v;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cnt++;
            v.push_back(a[j]);
            sort(v.begin(), v.end());
            if(v[0]*(cnt) > area){
                area = v[0] * cnt;
            }
        }
        cnt = 0;
        v.clear();
    }
    cout << area;
    return 0;
}