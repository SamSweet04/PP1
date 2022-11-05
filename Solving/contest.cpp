#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<int> row;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }

    for(int i = 0; i < v.size(); i++){
        if(i % 2 == 0) sort(v[i].begin(), v[i].end());
        else sort(v[i].rbegin(), v[i].rend());
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector <int> v;
//     int x;
//     for(int i = 0;i < n;++i){
//         cin >> x;
//         v.push_back(x);
//     }
//     sort(v.begin(),v.end());
//     do{
//         for(int i = 0; i < v.size(); i++)
//             cout << v[i] << " ";
//             cout << endl;
//     }
//     while(next_permutation(v.begin(),v.end()));
// }