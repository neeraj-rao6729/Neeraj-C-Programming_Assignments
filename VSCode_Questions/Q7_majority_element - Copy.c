/* LeetCode 169 - Majority Element (Easy-Medium) - Boyer-Moore voting */
int majorityElement(int* nums, int numsSize) {
    int candidate = 0, count = 0, i;
    for (i = 0; i < numsSize; i++) {
        if (count == 0) candidate = nums[i];
        count += (nums[i] == candidate) ? 1 : -1;
    }
    return candidate;
}
