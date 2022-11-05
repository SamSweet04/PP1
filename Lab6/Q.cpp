//Problem Q. 74867. Percent of girls
#include <iostream>
#include <cmath>
using namespace std;
void Girls(int n,int m){
    cout<< (float)m / n*100;
}
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    Girls(n,m);
}
// #include<iostream>
// #include <cmath>
// using namespace std;
// void percent(int a,int b){
//      double c= double(b*100)/a;
//     cout<<c;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     percent(a,b);
// }
// #include<iostream>
// #include <cmath>
// #include<iomanip>
// using namespace std;
//  void percent(int a,int b){
//     double c=double(b*100)/a;
//     cout<<setprecision(6)<<c;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//    percent(a,b);
// }