/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    
    int *a=(int*)malloc(sizeof(int)*nums1Size);

    int found=0;

    for(int i=0;i<nums1Size;i++)
    {
        a[i]=-1;
        found=0;
        for(int j=0;j<nums2Size;j++)
        {
            if(nums1[i]==nums2[j])
            found=1;

            if(found&&nums2[j]>nums1[i])
            {
                a[i]=nums2[j];
                break;
            }
        }
    }

    *returnSize=nums1Size;

    return a;
}