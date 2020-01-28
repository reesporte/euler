"""
project euler problem 18
"""
def read_triangle():
    lines = []

    for line in open("problems/p_18/triangle.txt", "r"):
        lines.append(line.rstrip("\n"))

    size = len(lines)

    triangle = [[0 for i in range(size)] for j in range(size)]

    row = 0

    for line in lines:
        line = line.split(" ")
        for i in range(len(line)):
            triangle[row][i] = int(line[i])
        row += 1
    return triangle

def print_trig(tri):
    """
    prints the triangle, helpful for debug
    """
    for lne in tri:
        for num in lne:
            if 0 < num < 10:
                print(0, end="")
            if num > 0:
                print(num, end="\t")
        print()

def main():
    tri = read_triangle()

    for i in range(len(tri)-1, -1, -1):
        for j in range(0, i):
            left = tri[i][j]
            right = tri[i][j+1]
            if left > right:
                tri[i-1][j] += left
            else:
                tri[i-1][j] += right

    print(tri[0][0])

if __name__ == '__main__':
    main()
