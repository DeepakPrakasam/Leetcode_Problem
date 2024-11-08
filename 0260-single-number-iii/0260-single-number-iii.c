/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    
    int *a=(int*)malloc(sizeof(int)*2);

    *returnSize=2;

    int count=0;

    for(int i=0,k=0;i<numsSize;i++)
    {
        count=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            count++;
        }
        if(count==1)
        {
            a[k]=nums[i];
            k++;
        }
    }

    return a;

    
}