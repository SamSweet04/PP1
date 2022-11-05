// // required to solve
// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// using namespace std;
  
// unsigned long long gen(){
//     static int i = -1;
//     i++;
//     unsigned long long x = 1;
//     for(int j = 1; j <= i; j++) x *= i;
//     return x;
// }
  
// int main(){
//     int n; cin >> n;  
//     vector<unsigned long long> v(n + 1); 
//     generate(v.begin(), v.end(), gen);

//     for (vector<unsigned long long> :: iterator it = v.begin(); it != v.end(); it++){
//         cout << *it << " ";
//     }
// }






#include <bits/stdc++.h>
using namespace std;
    int f(){
        static int i = -1;
        i++;
        return pow(i,i);
    }
    int main(){
        int n;
        cin >> n;
        vector <int> v(n+1);
        generate(v.begin(),v.end(),f);
        for(auto i : v){
            cout << i << " ";
        }
    }







#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n; // пихаем лонг лонг везде
    cin >> n;
    vector <long long> v;   // пихаем лонг лонг везде
    v.push_back(1);        // по началу выводим 1 поэтому 
    for(long long i = 1; i <= n;i++){  
        long long temp = i;   // сохраняем переменную temp в i 
        for(int j = 1; j < i;j++){  // затем начинаем находить его поуер по индексу
            temp *=i;   //  1  1  4  27 256
        }
         v.push_back(temp);  // значения будут постепенно входить в вектор

    }
    for(auto i : v){     // затем проходимся авто фориком по вектору чтобы вывести его элементы
        cout << i << " "; 
    }
}