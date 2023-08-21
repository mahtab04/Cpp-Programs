// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary

#include <bits/stdc++.h>
using namespace std;

double average(vector<int> &salary)
{
    double sum = 0;
    int min_element = INT_MAX;
    int max_element = INT_MIN;
    for (auto &sal : salary)
    {
        min_element = min(min_element, sal);
        max_element = max(max_element, sal);
        sum += sal;
    }
    // min and max element from vector

    sum = sum - min_element - max_element;
    return sum / (salary.size() - 2);
}

int main()
{
    vector<int> salary = {48000, 59000, 99000, 13000, 78000, 45000, 31000, 17000, 39000, 37000, 93000, 77000, 33000, 28000, 4000, 54000, 67000, 6000, 1000, 11000};
    cout << average(salary) << endl;
    return 0;
}