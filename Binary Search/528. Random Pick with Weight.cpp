class Solution {
    
private:
    vector<int>v;
    
public:
    Solution(vector<int>& w) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        for(int x: w){
            if(v.empty())
                v.push_back(x);
            else
                v.push_back(x+v.back());
        }
    }
    
    
    int pickIndex() {
        int n=v.back();
        int r=rand() % n;
        int x=upper_bound(v.begin(),v.end(),r)-v.begin();
        return x;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
