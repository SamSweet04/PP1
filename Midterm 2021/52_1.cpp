#include <iostream>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    
    
    
    int cnt[26]={0};
    for (int i = 0; i < s.size(); i++)
    {
        cnt[ (int)s[i] - 97  ]++;
    }
    int cntOdd = 0;
    for (int i = 0; i < 26; i++)
    {
        if( cnt[i]%2 != 0 )cntOdd++;
    }
    if( cntOdd>1 ) cout << "Onepiece";
    else cout << "Luffy is the pirate king!";
 
}