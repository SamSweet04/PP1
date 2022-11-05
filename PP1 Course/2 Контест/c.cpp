//Число Фибоначчи
#include <iostream>
using namespace std;
main()
{
int n,a=0,b=1,c=0,d=0;
cin>>n;
while (d<n)
{
a=b;
b=c;
c=a+b;
d++;
}
cout<<c;
}
