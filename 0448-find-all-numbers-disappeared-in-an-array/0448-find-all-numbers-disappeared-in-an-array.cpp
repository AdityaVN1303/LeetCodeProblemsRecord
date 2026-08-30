class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        vector<int>ans;
        sort(nums.begin() , nums.end());
        nums.erase(unique(nums.begin() , nums.end()) , nums.end());
        
        int itr = 0;
        for(int i=1; i<=n; ++i){
            if(i != nums[itr]){
                ans.push_back(i);
            }
            else{
                itr++;
            }
        }
        return ans;
    }
};