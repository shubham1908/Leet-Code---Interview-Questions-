class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        for(int i=0;i<pow(2,nums.size());i++){
            int x=i;
            vector<int>temp;
            int j=0;
            while(x){
                if(x&1){
                    temp.push_back(nums[j]);
                }
                x>>=1;
                j++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
