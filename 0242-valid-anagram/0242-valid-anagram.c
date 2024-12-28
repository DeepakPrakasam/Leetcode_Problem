bool isAnagram(char* s, char* t) {

    int len1=strlen(s);
    int len2=strlen(t);
    if(len1!=len2)
    return false;

    int a[26]={0};
    for(int i=0;i<len1;i++)
    {
        a[tolower(s[i]) - 'a']++;
        a[tolower(t[i]) - 'a']--;
    }

    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
        return false;
    }

    return true;
}