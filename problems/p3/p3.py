"""
project euler problem 3
"""

def is_prime(num):
    if num == 1:
        return False
    i = 2
    while i*i <= num:
        if num % i == 0:
            return False
        i += 1
    return True

def get_largest_prime_factor(num):
    largest = 0
    i = 2
    while i*i <= num:
        if num%i == 0:
            if is_prime(i):
                largest = i
        i += 1
    return largest

def main():
    print("the largest prime factor is:", get_largest_prime_factor(600851475143))

if __name__ == '__main__':
    main()
