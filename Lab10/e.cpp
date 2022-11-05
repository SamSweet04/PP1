#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> places;
    map <string , double> percentage;
    int n;
    cin >> n;
    long long sum = 0;
    for(int i = 0 ; i < n;i++){
    int m;
    cin >> m;
    for(int j = 0; j < m;j++){
        string city;
        int students;
        cin >> city >> students;
        places[city] += students;
        sum += students;
    }
    }
    for(auto i : places){
        percentage[i.first] = (double)i.second * 100 / sum;
    }
    for(auto i : percentage){
        cout << i.first << " " << i.second << endl;
    }
}
