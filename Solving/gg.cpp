#include <iostream>
using namespace std;

bool BinSearch(int a[], int n, int x, int i){
    if(a[i]==i){
        return false;
    }
    else  if(a[i]==x){
        return true;
    }
    return BinSearch(a,n,x,i--);

}
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    if(BinSearch(a, n, x, n - 1)==true){
        cout << "Yes";
    } else{
        cout << "No";
    }
}