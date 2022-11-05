//Problem C. 73912.Substring
#include <iostream>

using namespace std;

int main(){

    string s;

    cin >>s;

    string x;
    cin >> x;

    if(s.find(x) == string::npos){ // 4294967295==string::npos
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

    // cout << s.find(x); // находит индекс saad aad --> 1
    return 0;
}