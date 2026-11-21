/* LeetCode 1351 - Count Negative Numbers in a Sorted Matrix (Easy-Medium)
   Start at bottom-left and walk the staircase: O(m + n). */
int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int row = gridSize - 1, col = 0, count = 0;
    int cols = gridColSize[0];
    while (row >= 0 && col < cols) {
        if (grid[row][col] < 0) {
            count += cols - col;   /* everything to the right is also negative */
            row--;
        } else {
            col++;
        }
    }
    return count;
}
