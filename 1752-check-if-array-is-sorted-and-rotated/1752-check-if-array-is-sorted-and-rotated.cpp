class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int consecutive = 0;
        int itr = 0;
        int i = 0;

        if(nums.size() == 1) return true;
        while(itr < 2*n){
            int next = (i+1)%n;
            if(nums[i] <= nums[next]) consecutive++;
            else consecutive = 0;

            if(consecutive == n-1) return true;
            i = next;
            itr++;
        }
        return false; 
    }
};