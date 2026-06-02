class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=0;
        int maxi=INT_MIN;
        for (int i=0;i<nums.size();i++ ){
            currentsum+=nums[i];
            maxi=max(currentsum,maxi);
            if (currentsum<0) 
             currentsum=0;
        }
        return maxi;
        
    }
};