//A-! to .
#include <iostream>
using namespace std;

int main(){

    string s; getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '!') cout << '.';
        else cout << s[i];
    }

    return 0;
}