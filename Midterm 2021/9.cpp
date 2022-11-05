#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,unit = 0,zero = 0;
    cin >> n;
    string t = "";
    while(n > 0){
        t += (n % 2) + '0';
        n/=2;
    }
    for(int i = 0; i < t.size();i++){
        if(t[i] == '1') unit++;
        if(t[i] == '0') zero++;
    }
    reverse(t.begin(),t.end());
    cout << t << endl;
    cout << "zeros" << " "<< zero << endl;
    cout << "number of units" << " "<< unit << endl;
}
    



// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,zero = 0,unit = 0;
//     cin >> n;
//     int i = 0;
//     int binaryNum[32];
//     while (n > 0) {
//     binaryNum[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
//     for (int j = i - 1; j >= 0; j--){
//     cout << binaryNum[j];
    
// }
// for (int j = i - 1; j >= 0; j--){
// if(binaryNum[j]==0)zero++;
// else unit++;
// }
// cout << endl;
// cout <<"zeros"<<" "<<zero<<endl;
// cout <<"number of units"<<" "<<unit<<endl;
// }