/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int* returned_array = (int*) malloc(numsSize * sizeof(int));
    for (int i=0; i<numsSize; i++) {
        if (nums[i]%2 == 0) nums[i]=0;
        else nums[i]=1;
    }
    for (int i=0; i<numsSize; i++) {
        int temp;
        for (int j=0; j<numsSize; j++) {
            if (j+1 == numsSize) break;
            if (nums[j]>nums[j+1]) {
                temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    return nums;
}