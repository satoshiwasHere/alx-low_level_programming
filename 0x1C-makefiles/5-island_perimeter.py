#!/usr/bin/python3

    """
    calculates and returns the no. of water neighbors in a cell grid
    """

def num_water_neighbors(grid, x, y):

    num = 0

    if x > 0 and grid[x - 1][y]:
        num += 1

    if y > 0 and grid[x][y - 1]:
        num += 1

    if y < len(grid[x]) - 1 and grid[x][y + 1]:
        num += 1

    if x < len(grid) - 1 and grid[x + 1][y]:
        num += 1

    return num


def island_perimeter(grid):
    """
    calculates the perimeter of the island
    """

    perimeter = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:

                perimeter += num_water_neighbors(grid, x, y)

    return perimeter
