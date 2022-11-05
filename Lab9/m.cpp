#include <iostream>
#include <map>
#include <queue>
using namespace std;
int main(){
    int n; cin >> n;
    // multimap<int ,string > m;
    string s;
    queue<string> q;
    for(int i = 0;i < n;i++){
        int k; cin >> k;
        string s; 
        // m.insert(pair<int,string>(k,s));
        if(k == 1){
            cin >> s;
            q.push(s);
        }
        else if (k == 2){
            q.pop();
            // cout << "del";
        }
        if(!q.empty()){
            cout << q.front() << endl;
        }
        if(q.empty())
            cout << "queue is empty" << endl;
    }
    // while(!q.empty()){
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    return 0;
}
