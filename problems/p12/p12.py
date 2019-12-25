"""
project euler problem 12
"""

def divisor_count(num):
    count = 2
    i = 2
    while i * i < num:
        if num % i == 0:
            count += 2
        i += 1
    return count

def solution():
  number = 1
  ordinal = 2
  while divisor_count(number) < 500:
      number += ordinal
      ordinal += 1
  return number


def main():
    print(solution())

if __name__ == '__main__':
    main()
