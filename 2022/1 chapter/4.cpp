#include <iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c=0,i=0;
    cin>>n;
    while (i<n)
        {
        a=b;
        b=c;
        c=a+b;
        i++;
        cout << c << " ";
        }
 }