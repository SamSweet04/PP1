#include <bits/stdc++.h>
using namespace std;
int main (){
    int x,d,count=0;
    cin >> x >> d;
    do 
{
    if(x%10==d)count++;
}
    while(x>0);      
    
    
    cout << count ;
}
//не решено