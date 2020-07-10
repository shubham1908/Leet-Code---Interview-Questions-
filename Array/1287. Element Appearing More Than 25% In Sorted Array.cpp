class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    int findSpecialInteger(vector<int>& arr) {
        int i=0,x;
        for(int j=0;j<arr.size();j++){
            if(arr[i]==arr[j]){
                if(j-i+1>=arr.size()/4+1){
                    return arr[i];
                }
            }
            else{
                i=j;
            }
        }
        return arr[i];
    }
};
