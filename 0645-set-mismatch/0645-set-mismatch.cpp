class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); ++i){
            int correct = abs(nums[i]) - 1;
            if(nums[correct] > 0){
                nums[correct] = -nums[correct];
            }
            else{
                ans.push_back(abs(nums[i]));
            }
        }

        for(int i=0; i<nums.size(); ++i){
            if(nums[i] > 0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};