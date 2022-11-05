#include <iostream>

using namespace std;

int main(){
        int n;
        int evens=0, odds=0;
        cin>>n;

        for (int i = 0; i<n; i++){
        int a;
        cin>>a;
        if (a%2==0)  evens++;
        else odds++;
        }
        cout <<evens<<" "<<odds;
        return 0;
}
