/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) 
{
    int *a=(int*)malloc(sizeof(int)*numsSize);
    
     int evenIndex = 0;
    int oddIndex = numsSize - 1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0) {
            a[evenIndex++] = nums[i]; // Place even numbers in front
        } else {
            a[oddIndex--] = nums[i];   // Place odd numbers in the back
        }
    }

    *returnSize = numsSize;

    return a;
}