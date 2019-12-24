"""
project euler problem 10
"""
def sieve_eratos(num):
    """
    modified sieve of eratosthenes algorithm, takes a sum along the way
    """
    array = [True for i in range(num)]

    i = 2
    sum = 0
    while i*i <= num:
        if array[i]:
            for j in range(i*i, num, i):
                array[j] = False
        i += 1

    for i in range(2, num):
        if array[i]:
            sum += i

    return sum


def main():
    print(sieve_eratos(2000000))

if __name__ == '__main__':
    main()
