#include <iostream>
#include <cmath>
using namespace std;
// int Sum(string s,int i){
    
//          int n;
//          cin >> n;
//          cout << Sum(n);
//      }
 
//  int fibonacci(int x){
//       if(x==1) return 0;
//       if(x==2) return 1;
//       else return fibonacci(x-1)+fibonacci(x-2);
//     }

//    int main(){
//        int x;
//        cin >> x;
//        cout <<fibonacci(x);
//    }

// int main(){
//     int ans =  1;
//     int a = 5;
//     while(a!=0){
//         ans *=a;
//         a--;
//     }
//     cout << ans;
// }



// int factorial(int x){
//     if(x==0) return 1;

//     return factorial(x - 1)*x;
// }
// int main(){
//     int x;
//     cin >> x;
//     cout << factorial(x);

// }

int DegTwo(int x){
    if(x==0) return 1;
    else return (x - 1)*2;

}

int main(){
int a;
cin >> a;
cout << DegTwo(a);
}
