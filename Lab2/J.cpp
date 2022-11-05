#include <iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
     for(int i=0;i<n;i++){
         int num;
         cin>>num;
        while (num >0) {
         {
             int last =num%10;
             if(last==0)
             {
              result++;
             }
             num/=10;}
         }
     cout <<result;
     return 0;
}