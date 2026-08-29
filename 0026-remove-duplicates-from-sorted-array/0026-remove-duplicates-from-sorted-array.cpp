class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int current = nums[0];
        for(int j=0; j<nums.size(); ++j){
            if(nums[j] != current){
                i++;
                nums[i] = nums[j];
                current = nums[j];
            }
        }
        return i+1;
    }
};