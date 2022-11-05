// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     map <string, pair<string,string> > m; // у мэпа впереди идет ключ
//     m.insert(make_pair("John", make_pair("Smith","Petrovich")));

//     map <string , pair < string,string > > :: iterator it;
//     for(it = m.begin(); it != m.end(); ++it){
//     cout << (*it).second.first << " " <<(*it).first <<" " << (*it).second.second <<" ";
//     }
//   return 0;
// }

// void print(vector<int> & v2){
//   cout << &v2 << endl;
//   v2.push_back(100);
//   cout << v2.size() << endl;
//   vector <int> :: iterator it;
//   }
//   int main(){
//     vector<int> v;
//     int n, x;
//     cin >> n;
//     for(int i = 0;i < n; i++){
//       cin >> x;
//       v.push_back(x);
//     }
//     cout << &v << endl;
//     print(v);
//     cout << v.size()<<endl;
//   }

// AAAAAAAAAAAAAAAAAAAAAA
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin >> n;
//    vector <int> v;
//    for(int i = 0;i < n;i++){
//        int x;
//        cin >> x;
//        v.push_back(x);
//    }
//    sort(v.begin(),v.end());
//    for(int i = 0;i < v.size();i++){
//        cout << v[i]<<" ";
//    }
// }
//BBBBBBBBBBBBBBBBBBBBBB
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector <int> v;
//     for(int i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     reverse(v.begin(),v.end());
//     for(int i = 0; i < v.size(); i++)
//     cout << v[i] << " " ;
// }
//CCCCCCCCCCCCCCCCCCCCCCC
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int m,l;
    cin >> m >> l;
    reverse(v.begin()+m,v.begin()+l+1);
    for(int i = 0; i < v.size();i++)
    cout << v[i] << " ";
}
//DDDDDDDDDDDDDDDDDDDDDDDD
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector <int> v;
    // for(int  i = 0; i < n;i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // int k;
    // cin >> k;
//     v.erase(v.begin()+k);
//     for(int i = 0;i < v.size();i++)
//     cout << v[i] << " ";
// }
//EEEEEEEEEEEEEEEEEEEEEEEEEEE
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector <int> v;
//     for(int  i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int k,l;
//     cin >> k >> l;
//     v.erase(v.begin()+k,v.begin()+l+1);
//     for(int i = 0;i < v.size();i++)
//     cout << v[i] << " ";
// }
//FFFFFFFFFFFFFFFFFFFFFFFFFFFF
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector<int> v;
//         for(int i = 0; i < n; i++){
//             int x; cin >> x; 
//             v.push_back(x);
//         }
//     int l, x; cin >> l >> x;
//     v.insert(v.begin()+l,x);
//     for(int i = 0 ; i < v.size();i++){
//         cout << v[i] << " ";
//     }
// }
//GGGGGGGGGGGGGGGGGGGGGGGGGGGGGG
// #include <bits/stdc++.h>
// using namespace std;
// bool isPrime(int n){
//     if(n == 0 || n == 1) return false;
//     else {
//        for(int i = 2;i * i < n;i++){
//            if (n % i == 0)
//            return false;
//        }
//     }
//     return true;
// }

//  int main(){
//         int n;
//         int cnt = 0;
//         cin >> n;
//         vector <int> v;
//         for(int  i = 0; i < n;i++){
//             int x;
//             cin >> x;
//             v.push_back(x);
//         }
//         int k;
//         cin >> k;
//         for(int i = 0;i < v.size();i++){
//             if(v[i] > k && isPrime(v[i])) cnt++;
//         }
//         cout << cnt;
//     }
//HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    // int n;
    // cin >> n;
    // vector <int> v;
    // for(int  i = 0; i < n;i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // int k;
    // cin >> k;
//     sort(v.begin(),v.end());
//     for(int  i = 0; i < k;i++){
//         cout << v[i] << " ";
//     }
// }
// IIIIIIIIIIIIIIIIIIIIII
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     vector <int> v;
//     for(int  i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int k;
//     cin >> k;
//     for(int i  = 0;i < v.size();i++){
//         if(v[i] == k){
//             cout << "Yes";
//             return 0;
//         }
//     }
//     cout << "No";
// }
// JJJJJJJJJJJJJJJJJJJJJJ
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int max = 0;
//     int min = 1001;
//     cin >> n;
//     vector <int> v;
//     for(int  i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     for(int  i = 0; i < v.size();i++){
//         if(max < v[i]) max = v[i];
//         if(min > v[i]) min = v[i];
//     }
//     cout << max - min;
// }
//KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int sum = 0;
//     cin >> n;
//     vector <int> v;
//     for(int  i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
// int k;
// cin >> k;
// sort(v.begin(),v.end());
// for(int i = n - k;i < v.size();i++){
//     sum+=v[i];
// }
// cout << sum;
// }

//LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     int sum = 0;
//     cin >> n;
//     vector <int> v;
//     for(int  i = 0; i < n;i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     vector <int> :: iterator it;
//     it = unique(v.begin(),v.end());
//     v.resize(distance(v.begin(), it));
//     for(it = v.begin();it != v.end();++it){
//          cout<<*it << " ";
// }
// }
// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     set<int> s;
//     for(int i = 0; i < n; i++){
//         int x; cin >> x; 
//         s.insert(x);
//     }
//     cout << s.size();
// }
//MMMMMMMMMMMMMMMMMMMMMMM
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, sum = 0;
//     cin >> n;
//     set <int> s;
//     for(int i = 0; i < n; i++){
//         int x;
//         cin >> x;
//         s.insert(x);
//     }
//     for(set<int> :: iterator it = s.begin();it != s.end();it++){
//          sum += *it;
//     }
//     cout << sum;
// }
//NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN
// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     int n; cin >> n;
//     set<int> s;
//     for(int i = 0; i < n; i++){
//         int x; cin >> x; 
//         s.insert(x);
//     }
//     for(set<int> :: iterator it = s.begin(); it != s.end(); it++){
//         if(*it % 2 == 1) cout << *it << " "; 
//     }
// }
//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
// #include <iostream>
// #include <set>
// using namespace std;

// int main(){
//     string str; cin >> str;
//     set<int> se;
//     for(int i = 0; i < str.size(); i++){
//         se.insert(tolower(str[i]));
//     }
//     cout << se.size() << endl;
//     for(set<int> :: iterator it = se.begin(); it != se.end(); it ++){
//         cout << (char)*it << " ";
//     }

// }






