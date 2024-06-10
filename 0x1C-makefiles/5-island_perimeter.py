#!/usr/bin/python3
"""Function that measure an island perimeter. """


def island_perimeter(grid):
    """ Returns the perimeter of the island
    grid is a list of list of integers where 
    0 represents a water zone 
    and 1 represents a land zone

    ARGS:
        grid (list): list of list of integers
    Returns:
        the perimeter of the island
    """

    height = len(grid)
    width = len(grid[0])
    size = 0
    edge = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
                if (i > 0 and grid[i - 1][j] == 1):
                        edge += 1
    return size * 4 - edge * 2
