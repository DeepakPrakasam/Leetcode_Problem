int trap(int* height, int heightSize) {
    if (heightSize == 0) return 0; // No bars, no water

    int left = 0, right = heightSize - 1;
    int leftMax = 0, rightMax = 0;
    int trappedWater = 0;

    while (left <= right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left]; // Update leftMax
            } else {
                trappedWater += leftMax - height[left]; // Calculate trapped water
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right]; // Update rightMax
            } else {
                trappedWater += rightMax - height[right]; // Calculate trapped water
            }
            right--;
        }
    }

    return trappedWater;
}
