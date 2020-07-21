class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int lengthOfLongestSubstring(string s) {
        int ans=0,j=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i])!=mp.end()){
                j = max(mp[s[i]]+1,j);
            }
            mp[s[i]] = i;
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};
