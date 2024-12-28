class Solution {
    public int[] twoSum(int[] numbers, int target) {
        
        int n=numbers.length;
        int l=0,r=n-1;
        int a[]=new int[2];
        
        while(l<r)
        {
            int sum=numbers[l]+numbers[r];
            if(sum==target)
            {
                a[0]=l+1;
                a[1]=r+1;

                return a;
            }
            else if(sum<target)
            l=l+1;
            else
            r=r-1;
        }
        return a;
    }
}