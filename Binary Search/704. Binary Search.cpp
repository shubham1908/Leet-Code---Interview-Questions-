class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        while(l<=r){
            mid=(l+r)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
};
