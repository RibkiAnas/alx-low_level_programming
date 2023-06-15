#!/usr/bin/python3
def is_palindrome(n):
    return str(n) == str(n)[::-1]

largest_palindrome = 0
for i in range(999, 99, -1):
    for j in range(999, 99, -1):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

with open('102-result', 'w') as f:
    f.write(str(largest_palindrome))
