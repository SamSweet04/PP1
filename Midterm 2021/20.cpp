#include <iostream>

using namespace std;

int main (){
    long long n;
    cin >> n;
    int a, cnt = 0;
    string s = "";
    while(n > 0){
        int last = n % 10;      
        s += last + '0';
        cnt += last;
        n /= 10;
    }
    int d = s[s.size()-1] - '0';     
    cnt -= d; 
    int c = cnt % 10;
    if(d == c) cout << "YES";
    else cout << "NO";
    
    return 0;
}