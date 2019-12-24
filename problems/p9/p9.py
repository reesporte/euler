"""
project euler problem 9
"""
def is_triplet(a, b, c):
    if a*a + b*b == c*c:
        return True
    return False

def equals_a_num(a, b, c, num):
    if a + b + c == num:
        return True
    return False

def trip(num):
    for c in range(1, num//2):
        for b in range(1, c):
            for a in range(1, b):
                if is_triplet(a, b, c) and equals_a_num(a, b, c, num):
                    print((a, b, c))
                    return a*b*c

print(trip(1000))
