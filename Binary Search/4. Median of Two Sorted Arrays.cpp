class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            return findMedianSortedArrays(nums2,nums1);
        }
        int n=nums1.size();
        int m=nums2.size();
        int start=0;
        int end=n;
        int part1,part2;
        while(start<=end){
            part1=(start+end)/2;
            part2=(n+m+1)/2-part1;
            int maxleft1=(part1==0)?INT_MIN:nums1[part1-1];
            int minright1=(part1==n)?INT_MAX:nums1[part1];
            
            int maxleft2=(part2==0)?INT_MIN:nums2[part2-1];
            int minright2=(part2==m)?INT_MAX:nums2[part2];
            
            if(maxleft1<=minright2 && maxleft2<=minright1){
                if((n+m)&1){
                    return (double)max(maxleft1,maxleft2);
                }
                else{
                    return (double)(max(maxleft1,maxleft2) + min(minright1,minright2))/2;
                }
            }
            else if(maxleft1>minright2){
                end=part1-1;
            }
            else{
                start=part1+1;
            }
        }
        return 0.0;
    }
};
