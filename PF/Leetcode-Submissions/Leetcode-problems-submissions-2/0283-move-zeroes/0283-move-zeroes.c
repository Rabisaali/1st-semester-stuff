void moveZeroes(int* nums, int numsSize) {
    int last = numsSize-1;
    int temp;
    for (int i=0; i<numsSize; i++) {
        for(int i=0; i<numsSize; i++) {
            int temp;
            if (nums[i]==0) {
                if(i+1==numsSize) break;
                temp=nums[i+1];
                nums[i+1]=nums[i];
                nums[i]=temp;
            }
        }
    }
    for (int i=0; i<numsSize; i++) {
        printf("%d ", nums[i]);
    } 
}