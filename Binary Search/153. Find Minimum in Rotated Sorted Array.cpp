class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int findMin(vector<int>& nums) {
        // Find the pivot nums[l]>=nums[pivot]<=nums[r]
        // ans will be nums[pivot] 
        
        int l=0, r=nums.size()-1, pivot;
        
        while(l<=r){
            pivot = (l+r)/2;
            
            if(nums[(pivot-1>=0?pivot-1:0)] >= nums[pivot]  && nums[pivot]<= nums[(pivot+1<nums.size()?pivot+1:nums.size()-1)]){
                break;
            }
            if(nums[pivot]>nums[r]){   // right is not strictly increasing, pivot is in right
                l = pivot+1;
            }
            else{                         // left is not strictly increasing, pivot is in left
                r = pivot-1;
            }
        }
        return nums[pivot];
    }
};
