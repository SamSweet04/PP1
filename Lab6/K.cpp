//Problem K. 74632. Find the sum of all digits
#include <iostream>
using namespace std;
void SumDig(int n){
     int summ = 0;
     while(n > 0)
     {
         summ += n % 10;
         n /= 10;
     }
    
    cout <<summ;
}
int main(){
    int n;
    cin >> n;
    SumDig(n);
}