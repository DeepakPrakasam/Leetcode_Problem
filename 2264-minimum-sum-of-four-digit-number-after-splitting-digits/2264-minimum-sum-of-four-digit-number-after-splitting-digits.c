int minimumSum(int num) 
{
    int rem=0,i=0;
    int a[4];

    while(num>0)
    {
        a[i]=num%10;
        num=num/10;
        i++;
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }

    int b=a[0]*10+a[3];
    int c=a[1]*10+a[2];
    return b+c;
}