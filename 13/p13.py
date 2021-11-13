"""
project euler problem 13
"""

def solution():
    with open("./problems/p13/numbers.txt") as file:
        numbers = file.readlines()

    total = 0

    for number in numbers:
        total += int(number)

    return str(total)[0:10]

def main():
    print(solution())

if __name__ == '__main__':
    main()
