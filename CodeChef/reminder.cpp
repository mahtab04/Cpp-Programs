// Write a program to find the remainder when two given numbers are divided.

// Input
// The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

// Output
// Find remainder when A is divided by B.

// Constraints
// 1 ≤ T ≤ 1000
// 1 ≤ A,B ≤ 10000
// Example
// Input
// 3 
// 1 2
// 100 200
// 10 40

// Output
// 1
// 100
// 10

// problem link->"https://www.codechef.com/problems/FLOW002"


#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		// Complete the below line.
		int ans = a%b;
		printf("%d\n", ans);
	}

	return 0;
}