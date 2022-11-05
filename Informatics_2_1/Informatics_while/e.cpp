#include <iostream>
using namespace std;
 
int main()
 
{   
int n, k = 0;   
cin >> n;   
int x = 1;      
while (x < n)   
{        
x = x * 2;      
 k++;           
}        
cout << k; 
return 0;
}