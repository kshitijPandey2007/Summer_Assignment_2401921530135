class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
         vector<int> ans(n,0);
         int l=0,r=n-1,index=n-1;
         int ls,rs;
         while (l<=r){
            ls=nums[l]*nums[l];
            rs=nums[r]*nums[r];
            if (ls<rs){
                ans[index]=rs;
                r--;
            }
            else{
                ans[index]=ls;
                l++;
            }
            index--;
         }
    return ans;
        
    }
};