//Problem C. 74865. How many elements are same?
#include <iostream>
using namespace std;
void read(int a[], int n){
    int value;
    for(int i = 0; i < n; ++i){
        cin >> value;
        a[value]++;
    }
}

void print(int a[], int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int count(int a[], int b[], int n){
    int cnt = 0;

    for(int i = 1; i <= 100; ++i){
        cnt += min(a[i], b[i]);
    }

    return cnt;
}

int main(){

    int a[101], b[101];

    for(int i = 0; i <= 100; ++i){
        a[i] = b[i] = 0;
    }

    int n;
    cin >> n;

    read(a, n);
    read(b, n);


    cout << count(a, b, n) << endl;

    return 0;
}

#include <iostream>
using namespace std;
int cnt[10000],visited[100000];
int res(int n, int a[], int b[])
{
    int count = 0;
    for(int i = 0; i < n; i++){
        cnt[a[i]]++; // колличество встречаемых элементов в первом массиве
        visited[a[i]] = 1; // мы прошлись по этому числу True;
    }
    for(int i = 0; i < n; i++){
        if(visited[b[i]] == 1 and cnt[b[i]] > 0){
              cnt[b[i]]--; //уменьшаем колличество встречающихся чисел
              count++;       
      }
    }

    return count;
}

    int main (){
    int n,cnt = 0;
    cin >> n;
    int a[n],b[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    for(int i = 0;i < n;i++){
            cin >> b[i];
    }
    cout << res(n,a,b);
}
