class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int& x : nums){
            if(x == 0) x = -1;
        }

        unordered_map<int , int> mpp;

        int count = 0;
        int best = 0;

        for(int i=0; i<nums.size(); ++i){
            count += nums[i];
            if(count == 0) best = i+1;
            
            auto itr = mpp.find(count);
            if(itr != mpp.end()){
                best = max(best , i-mpp[count]);
            }
            else{
                mpp[count] = i;
            }
        }
        
        return best;
    }
};