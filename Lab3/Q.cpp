#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    bool ok=false;
    for(int i=2; i<n;i++){
        if (n%i==0){
         ok = true;
        }
    }
    if (ok==true){
        cout<<"No";
    }else {
    cout<<"Yes";}
    
return 0;
}