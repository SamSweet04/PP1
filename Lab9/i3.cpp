#include <iostream>
#include <set>
#include <queue>
using namespace std;
int main(){
    int n; cin >> n;
    multiset<string> k;
    string x;
    queue<string> q;
    for(int i = 0;i < n;i++){
      cin >> x;
      k.insert(x);
       if(k.count(x) == 1){
            q.push("new user added");
        }else{
            q.push("user already exists");
        }
    }
    while(!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}