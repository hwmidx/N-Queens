# Backtracking Algorithm

The idea is to place queens one by one in different columns, starting from the leftmost column.<br> When we place a queen in a column,
we check for clashes with already placed queens.In the current column, if we find a row for which there is no clash,
we mark this row and column as part of the solution. If we do not find such a row due to clashes then we backtrack and return false.

![images](https://user-images.githubusercontent.com/39775573/127766172-08e959bf-80ef-4f44-ba8e-c1771b2c9021.png)

To know more:
https://en.wikipedia.org/wiki/Eight_queens_puzzle
