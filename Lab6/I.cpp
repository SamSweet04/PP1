//Problem I. 74713. Capital Even
#include <iostream>
using namespace std;
void toCapital(string s){

    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            if(s[i] >= 'a' and s[i] <= 'z'){
                s[i] = s[i] - 32;
            }
        }
        cout << s[i];
    }
}
int main (){
    string s;
    cin >> s;
    toCapital(s);
}