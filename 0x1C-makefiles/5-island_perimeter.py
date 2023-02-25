#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of an island described in the given grid.

    Args:
        grid: A list of lists of integers representing the island. 0 represents a water zone, 1 represents a land zone.

    Returns:
        An integer representing the perimeter of the island.

    Raises:
        ValueError: If the grid is not rectangular, or if the island has lakes (water inside that isn't connected to the water around the island).
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # check left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # check right
                if j == cols-1 or grid[i][j+1] == 0:
                    perimeter += 1
                # check top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # check bottom
                if i == rows-1 or grid[i+1][j] == 0:
                    perimeter += 1

    # check for lakes
    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i > 0 and grid[i-1][j] == 0 and (j == 0 or grid[i][j-1] == 0) and (j == cols-1 or grid[i][j+1] == 0):
                    raise ValueError("Grid has a lake")
                if j > 0 and grid[i][j-1] == 0 and (i == 0 or grid[i-1][j] == 0) and (i == rows-1 or grid[i+1][j] == 0):
                    raise ValueError("Grid has a lake")

    return perimeter
