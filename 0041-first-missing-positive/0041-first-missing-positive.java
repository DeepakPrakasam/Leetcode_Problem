class Solution {
    public int firstMissingPositive(int[] nums) {
        int n = nums.length;
        
        // Step 1: Ignore non-positive and numbers greater than n
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = n + 1;
            }
        }
        
        // Step 2: Mark the presence of each number in the array
        for (int i = 0; i < n; i++) {
            int num = Math.abs(nums[i]);
            if (num > n) continue;
            num--; // Subtract 1 because array indices start from 0
            if (nums[num] > 0) {
                nums[num] = -nums[num];
            }
        }
        
        // Step 3: Find the first missing positive number
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
        
        // If we didn't find any missing number, return n + 1
        return n + 1;
    }
}