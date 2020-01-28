"""
project euler problem 7
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

next_prime = 3
number_of_primes = 2
last_prime = 0
while number_of_primes <= 10001:
    if is_prime(next_prime):
        number_of_primes += 1
        last_prime = next_prime
    next_prime += 2

print(last_prime)
