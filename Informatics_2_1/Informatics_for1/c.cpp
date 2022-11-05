#include <bits/stdc++.h>
using namespace std;
int main (){

    int a,b;
    cin>>a >> b;
    
    /*^int sqrt_a=ceil(sqrt(a+0.0));
       int sqrt_b=sqrt((double)b);
           for (int i=sqrt_a;i<=sqrt_b;i++)

       cout << i*i <<" ";*/

   for (int i=a;i<=b;i++){
       int Sqrt=sqrt((double)i);
       if (Sqrt*Sqrt==i){
       cout << i << " ";}
   }




}