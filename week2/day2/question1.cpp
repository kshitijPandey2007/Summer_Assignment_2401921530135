class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.size();
        int maxi=0;
        vector<int> a(256,-1);
        while (r<n){
            if (a[s[r]] != -1){
                if (a[s[r]]>=l){
                    l=a[s[r]]+1;
                }
             }
             int m=r-l+1;
             maxi=max(maxi,m);
             a[s[r]]=r;
             r++;

        }
    return maxi;
        
    }
};