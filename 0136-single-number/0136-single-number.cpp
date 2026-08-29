class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int> mpp;

        for(int x : nums){
            mpp[x]++;
        }

        for(auto& [x , y] : mpp){
            if(y == 1) return x;
        }

        return -1;
        
    }
};