#include <iostream>
using namespace std;
int main (){
    string s;
    cin >> s;
    int count = 0,cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            cnt ++;
            }
            
        }
    
        for (int i = 0; i < s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            count ++;
        }

    }
    cout << cnt<< " " << count;
}