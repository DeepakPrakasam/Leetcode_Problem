int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

char* getPermutation(int n, int k) {
    char* result = (char*)malloc((n + 1) * sizeof(char));
    result[n] = '\0';

    int numbers[n];
    for (int i = 0; i < n; i++) {
        numbers[i] = i + 1;
    }

    k--; 

    for (int i = 0; i < n; i++) {
        int fact = factorial(n - 1 - i);
        int index = k / fact;
        result[i] = '0' + numbers[index];

        for (int j = index; j < n - 1 - i; j++) {
            numbers[j] = numbers[j + 1];
        }

        k %= fact; 
    }

    return result;
}