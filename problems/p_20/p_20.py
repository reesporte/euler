"""
project euler problem 20
"""
import math

def main():
    num = math.factorial(100)
    count = 0
    while num > 0:
        count += num%10
        num = num//10
    print(count)

if __name__ == '__main__':
    main()
