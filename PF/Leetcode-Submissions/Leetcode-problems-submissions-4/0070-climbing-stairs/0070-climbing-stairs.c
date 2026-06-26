int climb(int n, int* dp) {
    if (n <= 2) return n;

    if (dp[n] != -1) return dp[n];   // memoization

    dp[n] = climb(n-1, dp) + climb(n-2, dp);
    return dp[n];
}

int climbStairs(int n) {
    int dp[46];                   // since LC guarantees n ≤ 45
    for (int i = 0; i < 46; i++)
        dp[i] = -1;

    return climb(n, dp);
}
