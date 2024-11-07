/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    
    int nums1[numsSize*2];
    for(int i=0;i<numsSize;i++)
    {
        nums1[i+numsSize]=nums1[i]=nums[i];
    }

    int *a=(int*)malloc(sizeof(int)*numsSize);

    for(int i=0;i<numsSize;i++)
    {
        a[i]=-1;
        for(int j=i+1;j<2*numsSize-1;j++)
        {
            if(nums1[j]>nums[i])
            {
                a[i]=nums1[j];
                break;
            }
                
        }
    }

    *returnSize=numsSize;
    return a;
}