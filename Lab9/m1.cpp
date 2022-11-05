#include <bits/stdc++.h>
using namespace std;
int main(){
    queue <string> q;
    int n;cin >> n;
    for(int i = 0; i < n;i++){
        int num;
        cin >> num;
        if(num == 1){
            string s;
            cin >> s;
            q.push(s);
        }
        else {
            q.pop();
        }
        if(q.size() == 0){
            cout << "queue is empty" << endl;;
        }
        else cout << q.front() << endl;
    }
}