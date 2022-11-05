//перевод из десячитной на двоичную
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num = 0, i = 0, rem;
    while(n != 0){
        rem = n % 10;
        n /= 10;
        num += rem*pow(2,i);
        ++i;
    }
    cout << num;

    return 0;
}
 // перевод из двоичной в десятичную
 #include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long bin = 0;
    int rem, i = 1, step = 1;
    while(n != 0){
        rem = n % 2;
        n /=2;
        bin += rem * i;
        i *=10;
    }
    cout << bin;

    return 0;
}
// точная степень двойки
bool rez = true;
while (rez && (n > 1)) {
  if(n % 2 == 1) rez = false;
  else n /= 2;
}
if(rez) cout<<"Yes"; else cout<<"No";
//gcd
int gcd(int a,int b)
{
    while(a && b)
    {
        int c=a%b;
        a=b;
        b=c;
    }
    return a | b;
}
//lcm
int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
        b %= a;
        if (b == 0) return a;
        a %= b;
    }
}
int lcm(int a, int b)
{
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}


// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;
 
// Recursive function to return gcd of a and b
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  
// Driver program to test above function
int main()
{
    int a = 15, b = 20;
    cout <<"LCM of " << a << " and "
         << b << " is " << lcm(a, b);
    return 0;
}