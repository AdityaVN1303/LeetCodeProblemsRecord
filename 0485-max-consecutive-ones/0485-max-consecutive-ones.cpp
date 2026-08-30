class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxVal = 0;
        
        for(int x : nums){
            if(x == 1) count++;
            else{
                maxVal = max(maxVal , count);
                count = 0;
            }
        }
        maxVal = max(count , maxVal);
        return maxVal;
    }
};