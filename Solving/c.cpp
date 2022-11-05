// #include <bits/stdc++.h>
// using namespace std;
// void LOL(string s,int i){
//     if(s[i] >= 'A' and s[i] <= 'Z'){
//     cout << s[i] <<" "<< i;
//     return;
//     }
//     if(i == s.size()) cout << "CHAOS!";
//     return;
//     LOL(s,i+1);
// }
// int main(){
//     string s;
//     cin >> s;
//     LOL(s,0);
// }
#include <bits/stdc++.h>
using namespace std;

char lol(string s, int i=0)
{
    if (s[i] == '\0')
         return 0;
    if (isupper(s[i]))
            return s[i];
    return lol(s, i+1);
}

int main()
{
    string s;
    cin >> s;
    char bukva = lol(s);
   
    if (bukva == 0)
        cout << "CHAOS!";
    else
        cout << bukva;
    return 0;
}