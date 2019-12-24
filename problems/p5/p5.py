"""
project euler problem 5
"""
smallest = 20

def is_divisible(num):
    """
    returns true if num is evenly divisible with every number from 1 to 20
    """
    for i in range(11, 21):
        if num % i != 0:
            return False
    return True

while not is_divisible(smallest):
    smallest += 20

print(smallest)
