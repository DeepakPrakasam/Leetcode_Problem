class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int r=matrix.length;
        int c=matrix[0].length;
        int left=0,right=r*c-1;

        while(left<=right)
        {
            int mid=(left+right)/2;
            int rowidx=mid/c;
            int colidx=mid%c;

            if(matrix[rowidx][colidx]==target)
            return true;
            else if(matrix[rowidx][colidx]>target)
            right=mid-1;
            else
            left=mid+1;

        }
        return false;
    }
}