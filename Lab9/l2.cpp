#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    multimap<int,int > m;
    for(int i = 1;i <= n;i++){
        int k; cin >> k;
        int k1; cin >> k1;
        m.insert(make_pair(k + k1,i));
    }
    multimap<int,int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
       cout << it -> second << " "; 
    }
}
    