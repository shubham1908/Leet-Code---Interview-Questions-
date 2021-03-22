class Solution {
public:
  
  // Boyer Moore Voting Algorithm
    
    int findCandidate(vector<int> &nums){
        int ce=nums[0],cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==ce){
                cnt++;
            }
            else{
                cnt--;
                if(cnt==0){
                    ce=nums[i];
                    cnt=1;
                }
            }
        }
        return ce;
    }
    
    bool isMajority(vector<int>&nums,int ce){
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ce){
                cnt++;
            }
        }
        if(cnt>nums.size()/2){
            return true;
        }
        return false;
    }
    
    int majorityElement(vector<int>& nums){
        int ce = findCandidate(nums);
        
        if(isMajority(nums, ce)){
            return ce;
        }
        else{
            return -1;
        }
    }
};
