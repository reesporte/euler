"""
project euler problem 11
"""

def make_grid():
    columns = 20
    rows = 20
    a = [[0 for x in range(columns)] for y in range(rows)]
    with open("./problems/p11/py_numbers.txt") as nums:
        numbers = nums.readlines()

    row = 0
    for num in numbers:
        num.strip()
        i = 0
        for number in num.split(","):
            a[row][i] = int(number.strip())
            i += 1
        row += 1

    return a

def solution():
    grid = make_grid()

    greatest = 0

    for row in range(20):
        for column in range(20):
            if 16 > column >= 3 and row < 16:
                #look diagonal left
                product = grid[row][column] * grid[row+1][column-1] * grid[row+2][column-2] * grid[row+3][column-3]
                if product > greatest:
                    greatest = product
                #look down
                product = grid[row][column] * grid[row+1][column] * grid[row+2][column] * grid[row+3][column]
                if product > greatest:
                    greatest = product
                #look diagonal right
                product = grid[row][column] * grid[row+1][column+1] * grid[row+2][column+2] * grid[row+3][column+3]
                if product > greatest:
                    greatest = product
                #look right
                product = grid[row][column] * grid[row][column+1] * grid[row][column+2] * grid[row][column+3]
                if product > greatest:
                    greatest = product
            elif column >= 3 and row < 16:
                #look diagonal left
                product = grid[row][column] * grid[row+1][column-1] * grid[row+2][column-2] * grid[row+3][column-3]
                if product > greatest:
                    greatest = product
                #look down
                product = grid[row][column] * grid[row+1][column] * grid[row+2][column] * grid[row+3][column]
                if product > greatest:
                    greatest = product
            elif column < 3 and row < 16:
                #look down
                product = grid[row][column] * grid[row+1][column] * grid[row+2][column] * grid[row+3][column]
                if product > greatest:
                    greatest = product
                #look diagonal right
                product = grid[row][column] * grid[row+1][column+1] * grid[row+2][column+2] * grid[row+3][column+3]
                if product > greatest:
                    greatest = product
                #look right
                product = grid[row][column] * grid[row][column+1] * grid[row][column+2] * grid[row][column+3]
                if product > greatest:
                    greatest = product
    return greatest

def main():
    print(solution())

if __name__ == '__main__':
    main()
