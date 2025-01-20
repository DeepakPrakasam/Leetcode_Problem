char* removeOuterParentheses(char* s) {

    int n = strlen(s);
    char* result = (char*)malloc(n * sizeof(char));  
    int index = 0;
    int open_count = 0; 

    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            if (open_count > 0) {
                result[index++] = s[i]; 
            }
            open_count++; 
        } 
        else if (s[i] == ')') {
            open_count--;  
            if (open_count > 0) {
                result[index++] = s[i]; 
            }
        }
    }

    result[index] = '\0';  
    return result;
    
}