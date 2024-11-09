char findTheDifference(char* s, char* t) 
{
    int a = 0;
    
    // XOR all characters in s and t
    for (int i = 0; s[i] != '\0'; i++) 
    {
        a ^= s[i];  // XOR characters in s
        a ^= t[i];  // XOR characters in t
    }

    // XOR the last character of t (extra character)
    a ^= t[strlen(s)]; 
    
    return (char)a; // Return the result, which is the added character
}
