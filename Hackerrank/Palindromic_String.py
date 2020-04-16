#Problem Link -> https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/


n = input()
try:
    val = str(n)
    if n == str(n)[::-1]:
        print('YES')
    else:
        print('NO')
except ValueError:
    print("")
