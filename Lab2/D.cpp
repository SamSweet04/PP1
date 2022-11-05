#include<iostream>
using namespace std;
int main()
{
	int n,k;
    cin>>n>>k;
	if(k>n){
        cout<<2;
    }
	else if(k==2)
	{
		cout<<n;
	}
    else
    {
        cout<<(n*2)/k+1;
    }
    return 0;
}