class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> stt1(nums1.begin() , nums1.end());
        unordered_set<int> stt2(nums2.begin() , nums2.end());
        vector<vector<int>> ans(2);
        
        for(int x : stt1){
            if(stt2.find(x) == stt2.end()){
                ans[0].push_back(x);
            } 
        }

        for(int x : stt2){
            if(stt1.find(x) == stt1.end()){
            ans[1].push_back(x);
            }
        }

        return ans;
    }
};