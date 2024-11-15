int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int *result = (int*)malloc(sizeof(int) * temperaturesSize);  // Result array
    int *stack = (int*)malloc(sizeof(int) * temperaturesSize);   // Stack to store indices
    int top = -1; // Stack pointer

    for (int i = 0; i < temperaturesSize; i++) {
        // Check if current temperature is warmer than temperatures at indices in the stack
        while (top >= 0 && temperatures[i] > temperatures[stack[top]]) {
            int prevIndex = stack[top--]; // Pop the top of the stack
            result[prevIndex] = i - prevIndex; // Calculate the number of days
        }
        stack[++top] = i; // Push current index onto the stack
    }

    // For indices remaining in the stack, no warmer temperature is ahead
    while (top >= 0) {
        result[stack[top--]] = 0;
    }

    free(stack); // Free the stack memory
    *returnSize = temperaturesSize;
    return result;
}
