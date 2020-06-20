class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int leftboundary(int l, int r, int target, vector<int>& nums){
        int mid = (l+r)/2;
        if(nums[mid] == target && (mid-1<0 || nums[mid-1]<target)){
            return mid;
        }
        else if(nums[mid] == target){
            return leftboundary(l, mid-1, target, nums);
        }
        else{
            return leftboundary(mid+1, r, target, nums);
        }
    }
    
    int rightboundary(int l, int r, int target, vector<int>& nums){
        int mid = (l+r)/2;
        if(nums[mid] == target && (mid+1 >= nums.size() || nums[mid+1]>target)){
            return mid;
        }
        else if(nums[mid] == target){
            return rightboundary(mid+1, r, target, nums);
        }
        else{
            return rightboundary(l, mid-1, target, nums);
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1, mid;
        vector<int>v(2,-1);
        
        while(l<=r){
            mid=(l+r)/2;
            
            if(nums[mid]==target){
                v[0] = leftboundary(l, mid, target, nums);
                v[1] = rightboundary(mid, r, target, nums);
                return v;
            }
            if(target<nums[mid]){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }   
        return v;
    }
};
