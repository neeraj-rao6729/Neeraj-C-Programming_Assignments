/* LeetCode 1572 - Matrix Diagonal Sum (Easy) */
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0, i;
    for (i = 0; i < matSize; i++) {
        sum += mat[i][i];
        sum += mat[i][matSize - 1 - i];
    }
    if (matSize % 2 == 1) sum -= mat[matSize / 2][matSize / 2];   /* centre counted twice */
    return sum;
}
