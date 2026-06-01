class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int check;
        for (int i=0;i<nums.size();i++){
            check=target-nums[i];
            if (m.find(check)!=m.end()){
                return {m[check],i};
            }
            m[nums[i]]=i;
        }
    return {};
    }
};