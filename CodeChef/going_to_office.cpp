// Problem Link -> https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/

// Write your code here
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
  ll d;
  ll oc, of, od;
  ll cs, cb, cm, cd;
  cin >> d >> oc >> of >> od >> cs >> cb >> cm >> cd;
  ll online_taxi = (oc) + (d - of) * od;
  ll classic_taxi = (cb) + (ceil(d / cs) * cm) + (d * cd);
  if (online_taxi <= classic_taxi)
  {
    cout << "Online Taxi" << '\n';
  }
  else
  {
    cout << "Classic Taxi" << '\n';
  }
}