

#include<iostream> 
using namespace std;
 int main (){

     char ch[100];
     int countSmall = 0,countCap = 0;
     for (int i = 0; ch[i]!=0; i++){
         cin >> ch[i];
         if(ch[i] >= 'a' && ch[i] <='z'){
             countSmall++;
         }
         else {
             countCap++;
         }
     }
     cout << countCap<< " " << countSmall;
   
    
 }
