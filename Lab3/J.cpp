// Upper bound -1?
//Given a sorted array and a target value, return the index if the target is found. If not, return the index
//where it would be if it were inserted in order.//
//You may assume no duplicates in the array.
#include <iostream>
using namespace std;
int main(){
    int n, target, index, count = 0;
    cin >> n >> target;
    int a[n];
    bool found = false;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == target){
            index = i + 1;
            found = true;
        }
    }
    if(found == true){
        cout << index;
    } else {
        for(int i = 0; i < n; i++){
            if(target > a[i]){
                count++;
            }
        }
        cout << count;
    }
}
















//5 15
//1 3 5 12 14

//5