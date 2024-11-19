class Solution {
    public int minCut(String s) {
        int n = s.length();
        int[] cut = new int[n];
        boolean[][] isPalindrome = new boolean[n][n];
        
        for (int i = 0; i < n; i++) {
            int minCut = i;
            for (int j = 0; j <= i; j++) {
                if (s.charAt(i) == s.charAt(j) && (i - j <= 2 || isPalindrome[j+1][i-1])) {
                    isPalindrome[j][i] = true;
                    minCut = j == 0 ? 0 : Math.min(minCut, cut[j-1] + 1);
                }
            }
            cut[i] = minCut;
        }
        
        return cut[n-1];
    }
}