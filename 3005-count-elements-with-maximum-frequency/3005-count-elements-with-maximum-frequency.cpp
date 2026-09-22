class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> mpp;

        int sum = 0;
        int maxFreq = INT_MIN;
        for(int x : nums){
            mpp[x]++;

            if(mpp[x] > maxFreq){
                maxFreq = mpp[x];
                sum = mpp[x];
            }
            else if(mpp[x] == maxFreq){
                sum += mpp[x];
            }
            
        }
        return sum;
    }
};