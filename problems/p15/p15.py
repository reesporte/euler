"""
project euler problem 15
"""

def path_counter(grid_size):
    """
    counts number of paths by starting at bottom of grid and moving up, adding
    possible paths until you reach 0,0 where you return
    """

    grid = [[0] * (grid_size+1)] * (grid_size+1)

    for i in range(grid_size):
        grid[i][grid_size] = 1
        grid[grid_size][i] = 1

    for row in range(grid_size-1, -1, -1):
        for col in range(grid_size-1, -1, -1):
            grid[row][col] = grid[row+1][col] + grid[row][col+1]

    return grid[0][0]

def main():
    print(path_counter(20))

if __name__ == '__main__':
    main()
