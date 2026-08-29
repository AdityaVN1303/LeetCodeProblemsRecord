class Solution {
public:

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> stt(nums1.begin() , nums1.end());
        
        for(int x : nums2){
            if(stt.find(x) != stt.end()){
                ans.push_back(x);
                stt.erase(x);
            }
        }
        return ans;
    }
};