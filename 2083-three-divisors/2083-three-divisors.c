bool isThree(int n) 
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c==3)
    return 1;
    else
    return 0;
}