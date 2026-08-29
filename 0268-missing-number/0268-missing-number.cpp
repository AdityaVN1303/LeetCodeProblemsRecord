class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int full = n*(n+1)/2;
        int total = accumulate(nums.begin() , nums.end() , 0);

        return full - total;
    }
};