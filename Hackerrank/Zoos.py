#Problem Link ->https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/



# Write your code here
s = input()

x=s.count('z')
y = s.count('o')

if 2*x==y:
    print("Yes")
else:
    print("No")
