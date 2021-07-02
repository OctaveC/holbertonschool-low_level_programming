#!/usr/bin/python3
"""
Module for our island_perimeter function
"""

def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid. """
    count = 0
    length = len(grid)
    for ite in range(0, length):
        for ite2 in range(0, len(grid[0])):
            if grid[ite][ite2] == 1:
                count += 4
                if (ite - 1 >= 0) and (grid[ite - 1][ite2] == 1):
                    count -= 2
                if (ite2 - 1 >= 0) and (grid[ite][ite2 - 1] == 1):
                    count -= 2
    return count
