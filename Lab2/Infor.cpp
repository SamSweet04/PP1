#include <iostream>
#include <cmath>
using namespace std;
 
int main(){
     
   int s=109,l,v,t,res;
   cin>>v>>t;
   l=v*t;
   res=(s+l%s)%s;
   cout<<res;
 
   return 0;
 
}