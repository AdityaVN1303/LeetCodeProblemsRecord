class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = remove(nums.begin() , nums.end() , 0);
        int i = it - nums.begin();

        while(i < nums.size()){
            nums[i++] = 0;
        }
    }
};