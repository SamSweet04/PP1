//Problem H. 74803. Valid number
#include <iostream>
using namespace std;
bool Even(int n){
        bool valid = true;
        while( n > 0)
        {
            if ( (n % 10) % 2 != 0)
            {
                valid= false;
                break;
            }
            n /= 10;
        }
        if(valid){
            return true;
        }
        return false;
    }
   int main()
{
   int n;
   cin >> n;
   if(Even(n)){
       
     cout << "Valid";
   }
   else {
       cout <<"Not valid";
   }
}
 