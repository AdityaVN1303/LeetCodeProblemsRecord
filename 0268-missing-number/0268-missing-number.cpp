class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int fullRange = 0;
        int currentRange = 0;
        for(int i=0; i<nums.size(); ++i){
            fullRange ^= i;
            currentRange ^= nums[i];
        }
        fullRange ^= nums.size();
        return fullRange ^ currentRange;
    }
};