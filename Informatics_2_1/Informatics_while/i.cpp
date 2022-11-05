#include <iostream>
using namespace std;
main()
{
int n,a=0,b=1,c=0,d=0;
cin>>n;
while (c<n)
{
a=b;
b=c;
c=a+b;
d++;
}
if(c==n)cout<<d;
else cout<<-1;
}