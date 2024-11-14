int countDigitOne(int n) {
    int count = 0;
    long position = 1;  // Start with the units place

    while (position <= n) {
        int higher = n / (position * 10);
        int current_digit = (n / position) % 10;
        int lower = n % position;

        // Count of '1's contributed by the current position
        if (current_digit == 0) {
            count += higher * position;
        } else if (current_digit == 1) {
            count += higher * position + lower + 1;
        } else {
            count += (higher + 1) * position;
        }

        position *= 10;  // Move to the next digit place
    }

    return count;
}