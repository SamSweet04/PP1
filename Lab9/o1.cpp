#include <iostream>
#include <map>
using namespace std;
int main(){
    int n; cin >> n;
    string name, password;
    map<string , string> a1;
    for(int i = 0;i < n;i++){
        cin >> name >> password;
        a1.insert(pair<string ,string >(name, password));
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name >> password;
        bool c = false;
        bool c1 = false;
        map<string ,string> :: iterator it;
        for(it = a1.begin();it != a1.end();it++){
            if(it -> first == name){
                c = true;
            }
            if(it->second == password){
                c1 = true;
            }
        }
        if(!c){
            cout << "login error" << endl;
        }
        else if(!c1){
            cout << "password error" << endl;
        }
        else{
            cout << "correct password" << endl;
        }
        c = false; c1 = false;

    }
    return 0;
}