class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            t=t^nums[i];
        }
        return t;
    }
};
