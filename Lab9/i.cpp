#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,int> User;
    for(int i = 0; i < n;i++){
    string name;
    cin >> name;
    if(User.count(name)==1){ // user.count(name) - check if key exists
       cout << "user already exists" << endl;
    }else{
        cout << "new user added" << endl;
        User[name] = 1;
    }
    }
}
