class Solution {
public:
    Solution() {
        ios_base:: sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]*nums[i-1];
        }
        int x=1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i] *= x;
            x *= nums[i];
        }
        return ans;
    }
};
