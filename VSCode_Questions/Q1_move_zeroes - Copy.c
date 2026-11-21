/* LeetCode 283 - Move Zeroes (Easy) */
void moveZeroes(int* nums, int numsSize) {
    int pos = 0, i;
    for (i = 0; i < numsSize; i++)
        if (nums[i] != 0) nums[pos++] = nums[i];
    while (pos < numsSize) nums[pos++] = 0;
}
