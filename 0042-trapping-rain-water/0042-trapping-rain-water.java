class Solution {
    public int trap(int[] h) {
        
        int res=0;
        int n=h.length;
        int l[]=new int [n];
        int r[]=new int [n];

        l[0]=h[0];
        r[n-1]=h[n-1];

        for(int i=1;i<n;i++)
        {
            l[i]=Math.max(l[i-1],h[i]);
            r[n-i-1]=Math.max(r[n-i],h[n-1-i]);
            System.out.printf("Right:%d",r[i]);
        }
        for(int i=0;i<n;i++)
        {
            res=res+Math.min(l[i],r[i])-h[i];
        }

        return res;
    }
}