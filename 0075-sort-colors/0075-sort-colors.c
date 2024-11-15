void sortColors(int* nums, int numsSize) {
    int low = 0, mid = 0, high = numsSize - 1;
    
    // Iterate through the array with the mid pointer
    while (mid <= high) {
        if (nums[mid] == 0) {
            // Swap nums[low] and nums[mid], move low and mid forward
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            // If the current element is 1, just move the mid pointer
            mid++;
        } else {
            // If the current element is 2, swap nums[mid] and nums[high], move high backward
            int temp = nums[high];
            nums[high] = nums[mid];
            nums[mid] = temp;
            high--;
        }
    }
}

void printArray(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}