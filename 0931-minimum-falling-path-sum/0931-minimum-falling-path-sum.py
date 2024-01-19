class Solution:
    def minFallingPathSum(self, a: List[List[int]]) -> int:
        n, m = len(a), len(a[0])
        
        dp = [[inf] * m for _ in range(n)]
        
        for i in range(m):
            dp[0][i] = a[0][i]
        
        for i in range(1, n):
            for j in range(m):
                top_left = dp[i- 1][j - 1] if j else inf
                top_up = dp[i - 1][j]
                top_right = dp[i - 1][j + 1] if j < m - 1 else inf
                
                dp[i][j] = min(top_left, top_up, top_right) + a[i][j]
        
        return min(dp[-1])
                
            