//Problem F. 74718. Valid string
#include <iostream>
using namespace std;
bool Valid(string s, int n){
    int count = 0;
    for(size_t i = 0; i < s.size(); i++){
        if( s[i] > '0' and s[i] < '9'){
        count++;
        }
    }
    if( n <= count ){
        return true;        
    }
    else {
        return false;
}
}
int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    if(Valid(s,n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

}