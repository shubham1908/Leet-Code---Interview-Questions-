class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    string convert(string s, int n) {
        if(n==1){
            return s;
        }
        int  m=0, i=0;
        string ans="";
        for(int k=0;k<n;k++){
            m=0;
            if(k==0 || k==n-1){
                while(m*(2*n-2)+k<s.length()){
                    ans+=s[m*(2*n-2)+k];
                    m++;
                }
            }
            else{
                while(true){
                    if(m*(2*n-2)+k<s.length()){
                        ans+=s[m*(2*n-2)+k];
                    }
                    else{
                        break;
                    }
                    if((m+1)*(2*n-2)-k<s.length()){
                        ans+=s[(m+1)*(2*n-2)-k];
                    } 
                    else{
                        break;
                    }
                    m++;
                }
            }
        }
        return ans;
    }
};
