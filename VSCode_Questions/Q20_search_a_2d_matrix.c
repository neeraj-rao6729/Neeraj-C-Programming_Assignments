/* LeetCode 74 - Search a 2D Matrix (Medium) - binary search on the flattened matrix */
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int cols = matrixColSize[0];
    int lo = 0, hi = matrixSize * cols - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        int val = matrix[mid / cols][mid % cols];
        if (val == target) return true;
        if (val < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return false;
}
