#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector<string> names;  
vector<int> marks;  
for(int i = 0; i < n; i++){
    string s; int n;
    cin >> s >> n;
    names.push_back(s); 
    marks.push_back(n);
}
sort(names.begin(), names.end());
sort(marks.begin(), marks.end());
    for(int i = 0; i < n; i++)
cout << names[i] << " " << marks[i] << "\n";
}
