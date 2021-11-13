"""
project euler problem 16
"""

def two_to_the(power):
    """
    returns sum of all digits of 2^power
    eg
    2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26
    """
    num = 2**power
    sum = 0

    while num > 0:
        digit = num%10
        num = num//10
        sum += digit

    return sum

def solution():
    print(two_to_the(1000))

if __name__ == '__main__':
    solution()
