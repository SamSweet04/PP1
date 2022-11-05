#include <iostream>
using namespace std;
void fakt(int n)
{
    unsigned r;
    for (r=1;n>0;--n) 
            r*=n;
    cout << r;
}
void bci(int n,int k)
{
   cout << fakt(n)/(fakt(k)*fakt(n-k));
}
int main(){
    int n;
    cin >> n;
    for(int i = 0;i <= n; i++){
        
    }
