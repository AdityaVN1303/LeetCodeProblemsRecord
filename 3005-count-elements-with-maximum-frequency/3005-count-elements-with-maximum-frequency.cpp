class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> mpp;

        for(int x : nums){
            mpp[x]++;
        }

        int maxFreq = INT_MIN;
        
        for(auto& [_ , second] : mpp){
            maxFreq = max(maxFreq , second);
        }

        int sum = 0;
        for(auto& [_ , second] : mpp){
            if(second == maxFreq) sum += maxFreq;
        }

        return sum;
    }
};