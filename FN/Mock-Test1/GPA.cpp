#include <bits/stdc++.h>
using namespace std;
int main()
{
    map <string, double> student_gpa;
    map <string, double> gpas = {{"A", 4}, {"A-", 3.67}, {"B+", 3.33}, {"B", 3}, {"B-", 2.67}, {"C+", 2.33}, {"C", 2}, {"C-", 1.67}, {"D+", 1.33}, {"D", 1}, {"F", 0}};
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        double total_credits = 0, total_points = 0;
        int k;
        string name;
        cin >> name >> k;
        for(int j = 0; j < k; j++)
        {
            string grade;
            int credits;
            cin >> credits >> grade;
            total_points += (double)gpas[grade] * credits;
            total_credits += credits;
        }
        student_gpa[name] = (double)total_points / total_credits;
    }
    for(auto i : student_gpa)
    {
        cout << i.first << setprecision(2) << fixed << " : " << i.second << endl;
    }
}