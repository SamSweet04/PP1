#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    deque <int> deq;
    while(n--){
        int x;
        cin >> x;
        deq.push_back(x);
    }
    int front ;
    while(k--){
        front = deq.front();
        deq.pop_front();
        deq.push_back(front);
    }
    while(!deq.empty()){
        cout << deq.front() << " ";
        deq.pop_front();
    }
}