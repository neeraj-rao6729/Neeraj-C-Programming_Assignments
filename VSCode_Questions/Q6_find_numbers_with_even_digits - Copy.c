/* LeetCode 1295 - Find Numbers with Even Number of Digits (Easy) */
int findNumbers(int* nums, int numsSize) {
    int count = 0, i;
    for (i = 0; i < numsSize; i++) {
        int digits = 0, x = nums[i];
        while (x > 0) { digits++; x /= 10; }
        if (digits % 2 == 0) count++;
    }
    return count;
}
