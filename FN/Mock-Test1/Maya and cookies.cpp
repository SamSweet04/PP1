#include <bits/stdc++.h>
using namespace std;
int findMax(vector <int> v, int n)
{
    n--;
    if(n == 0)
    {
        return v[n];
    }
    int max = findMax(v, n);
    if(v[n] > max)
    {
        return v[n];
    }
    return max;
}
int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    int max = findMax(v, n);
    for(int i = 0; i < n; i++)
    {
        if(v[i] == max)
        {
            cout << i + 1;
            break;
        }
    }
}