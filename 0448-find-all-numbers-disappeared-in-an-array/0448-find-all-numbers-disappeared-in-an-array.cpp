class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        for(int i=0; i<nums.size(); ++i){
            int correct = abs(nums[i])-1;
            if(nums[correct] < 0 ) continue;
            nums[correct] = -nums[correct];
        }

        for(int i = 0; i <nums.size(); ++i){
            if(nums[i] > 0) ans.push_back(i+1);
        }
        return ans;
    }
};