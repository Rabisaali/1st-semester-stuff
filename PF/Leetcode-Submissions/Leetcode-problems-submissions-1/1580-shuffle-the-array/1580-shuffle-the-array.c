

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = 2*n;
    int* returned_array = (int*) malloc(numsSize*sizeof(int));
    int first=0;
    int second=n;
    for (int i=0; i<2*n; i++) {
        if (i%2==0) returned_array[i] = nums[first++];
        else returned_array[i] = nums[second++];
    }
    return returned_array;
}