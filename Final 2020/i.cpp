#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <stack>
using namespace std;
bool check(string n, string a, string b){

    if(n.find(a) == string :: npos) return 0;
    if(n.find(b) == string :: npos) return 0;
    return 1;

}
int main(){

    string s1, s2;
    cin >> s1 >> s2;


    if(check(s1, s1, s2)){
        cout << s1;
        return 0;
    }


    if(check(s2, s1, s2)){
        cout << s2;
        return 0;
    }

    
    string s3 = s2;
    string ans1, ans2;
    while(s3.size() != 0){
        if(check(s1 + s3, s1, s2)){
            ans1 = s1 + s3;
        }
        s3 = s3.substr(1, s3.size());
    }


    string s4 = s1;
    while(s4.size() != 0){
        if(check(s2 + s4, s1, s2)){
            ans2 = s2 + s4;
        }
        s4 = s4.substr(1, s4.size());
    }

    
    if(ans1.size() <= ans2.size()){
        cout << ans1;
        return 0;
    }


    cout << ans2;
    return 0;
    
}