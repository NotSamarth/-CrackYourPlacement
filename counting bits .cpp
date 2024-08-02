class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1,0);
        if(n==0) return dp;
        dp[1] = 1;
        int npt = -1;
        for(int i=2;i<=n;++i){
            if(!(i&(i-1))) npt = i;
            dp[i] = 1 + dp[i-npt];
        }
        return dp;
    }
};