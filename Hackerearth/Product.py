# Problem Link -> https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/



n = int (input ())
x = input ().split ()
res = 1
for i in range (n):
    res = (res * int (x[i])) % (10**9 + 7) 
print (res)