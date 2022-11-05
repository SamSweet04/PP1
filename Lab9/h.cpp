#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    map<string ,int> k; 
    string x;
    for(int i = 1;i <= n ;i++){
        cin >> x;
        k.insert(make_pair(x,i));
    }
    map <string,int> :: iterator it;
    for(it = k.begin();it != k.end();it++){
        cout << it->first << " " << it->second << endl;
    }
} 
