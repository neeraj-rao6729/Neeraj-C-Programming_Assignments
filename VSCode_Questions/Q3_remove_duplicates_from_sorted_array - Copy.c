/* LeetCode 26 - Remove Duplicates from Sorted Array (Easy) */
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int k = 1, i;
    for (i = 1; i < numsSize; i++)
        if (nums[i] != nums[k - 1]) nums[k++] = nums[i];
    return k;
}
