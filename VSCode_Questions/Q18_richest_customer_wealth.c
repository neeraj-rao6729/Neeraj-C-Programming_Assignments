/* LeetCode 1672 - Richest Customer Wealth (Easy) */
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int best = 0, i, j;
    for (i = 0; i < accountsSize; i++) {
        int sum = 0;
        for (j = 0; j < accountsColSize[i]; j++) sum += accounts[i][j];
        if (sum > best) best = sum;
    }
    return best;
}
