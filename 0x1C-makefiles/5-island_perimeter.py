#!/usr/bin/python3
"""
island_perimeter funtion module
"""


def check_sides(y, x, grid):
    """
        check all sides of the grid cell
    """
    YL = len(grid)
    XL = len(grid[y])
    sides = 0
    if y - 1 < 0 or grid[y - 1][x] == 0:
        sides += 1
    if x - 1 < 0 or grid[y][x - 1] == 0:
        sides += 1
    if y + 1 == YL or grid[y + 1][x] == 0:
        sides += 1
    if x + 1 == XL or grid[y][x + 1] == 0:
        sides += 1
    return sides


def island_perimeter(grid):
    """
        returns the perimeter of the island
        described in grid
    """
    if grid is None or type(grid) != list:
        return 0
    for a in grid:
        if type(a) != list:
            return 0
        for i in a:
            if type(i) != int:
                return 0
    peri = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x] == 1:
                peri += check_sides(y, x, grid)
    return peri
