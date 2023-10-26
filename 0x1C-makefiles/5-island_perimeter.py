#!/usr/bin/python3
""" Module for island_perimeter method """


def island_perimeter(grid):
    """
    Calculates the perimeter of an island represented by a 2D grid of 0's and 1's
    Args:
        grid -> list
    Returns:
        int: The perimeter of the island i.e edges
    """
    perimeter = 0  # initialize perimeter to 0
    for row in range(len(grid)):  # iterate over each row in the grid
        for col in range(len(grid[0])):  # iterate over each column in the grid
            if grid[row][col] == 1:  # if the current cell is part of the island
                perimeter += 4  # add 4 to the perimeter
                if row > 0 and grid[row-1][col] == 1:  # if the cell above is also part of the island
                    perimeter -= 2  # subtract 2 from the perimeter
                if col > 0 and grid[row][col-1] == 1:  # if the cell to the left is also part of the island
                    perimeter -= 2  # subtract 2 from the perimeter
    return (perimeter)  # return the final perimeter of the island
