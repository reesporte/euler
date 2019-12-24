"""
project euler problem 4
"""

def is_palindrome(num):
    num = str(num)
    while num:
        if num[0] != num[-1]:
            return False
        num = num[1:-1]
    return True

def largest_palindrome():
    largest = 0
    count = (0,0)
    for i in range(100, 1000):
        for j in range(100, 1000):
            product = i * j
            if is_palindrome(product) and product > largest:
                largest = product
                count = (i, j)
    print(largest, "=", count[0], "x", count[1])

largest_palindrome()
