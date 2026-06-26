/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* returned_array = (int*) malloc(numsSize * sizeof(long long int));
    returned_array[0] = nums[0];
    for (int i=1; i<numsSize; i++) {
        returned_array[i] = returned_array[i-1] + nums[i];
    }
    //returning the array
    return returned_array;
}