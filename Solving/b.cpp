#include <iostream>
using namespace std;
int main(){
   int CurVal = 0, val = 0;
   if(cin >> CurVal){
       int cnt = 1;
       while(cin >> val){
           if(val == CurVal)
           ++cnt;
           else {
               cout << CurVal<<" " << "occurs" <<" "<< cnt <<" "<< "times" <<endl;
               CurVal = val;
               cnt  = 1;
           }
       }
       cout << CurVal <<" "<< "occurs" <<" "<< cnt <<" "<< "times" <<endl;
    
   }=
   return 0;
}