// required to solve
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <pair<pair<string,int>,pair <string,int>>,int> m;
    for(int i = 0; i < n;i++){
        string name1,name2;
        int points1,points2;
        cin >> name1 >> points1 >> name2 >> points2;
        int sum = points1 + points2;
        m[{{name1,points1},{name2,points2}}] = sum;
    }
    for(auto i : m){
       cout << i.first.first.first << " and " << i.first.second.first <<" "<< i.second << endl;    
       }
}
