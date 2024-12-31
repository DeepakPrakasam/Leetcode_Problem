class Solution {
    public int findMaxForm(String[] strs, int m, int n) {
        int[][] dp = new int[m + 1][n + 1];

        for (String s : strs) {
            int count_0 = 0, count_1 = 0;
            
            for (char c : s.toCharArray()) {
                if (c == '0') {
                    count_0++;
                } else {
                    count_1++;
                }
            }

            for (int i = m; i >= count_0; i--) {
                for (int j = n; j >= count_1; j--) {
                    dp[i][j] = Math.max(dp[i][j], dp[i - count_0][j - count_1] + 1);
                }
            }
        }

        return dp[m][n];
    }
}