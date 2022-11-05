#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  int n, sum = 0, prod = 1;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    v.push_back(num);
  }
  for (int i = 0; i < v.size(); i++)
  {
    sum += v[i] % 10;
    prod *= v[i] % 10;
  }
  cout << sum << " " << prod << endl;
}