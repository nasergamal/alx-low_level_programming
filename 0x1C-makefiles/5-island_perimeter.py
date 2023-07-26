#!/usr/bin/python3
'''calculate the perimeter around an island'''


def island_perimeter(grid):
    '''island_perimeter fucntion'''
    y, x = len(grid), len(grid[0])
    perimeter = 0
    for i in range(y):
        for n in range(x):
            if grid[i][n] == 1:
                perimeter += 4
                if n + 1 != x and grid[i][n + 1] == 1:
                    perimeter -= 2
                if i + 1 != y and grid[i + 1][n] == 1:
                    perimeter -= 2
    return perimeter
