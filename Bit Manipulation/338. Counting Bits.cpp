class Solution {
public:
    vector<int> countBits(int n) {
        int c=1;
        vector<int>dp(n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            if(pow(2,(int)log2(i))==i){
                c=i;
                dp[i]=1;
            }
            else{
                dp[i]=dp[i-c]+1;
            }
        }
        return dp;
    }
};
