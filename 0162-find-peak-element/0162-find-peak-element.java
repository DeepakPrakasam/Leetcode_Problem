class Solution {
    public int findPeakElement(int[] nums) {
        
        int n=nums.length;
        int i;
        for(i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            return i;
        }

        if(i==n-1)
        return n-1;

        return 0;
    }
}