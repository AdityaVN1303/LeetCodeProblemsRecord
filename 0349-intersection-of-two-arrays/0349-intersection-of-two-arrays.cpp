class Solution {
public:

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());

        vector<int> ans;

        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] == nums2[j]){
                int val = nums1[i];
                ans.push_back(val);
                while(i < nums1.size() && nums1[i] == val) i++;
                while(j < nums2.size() && nums2[j] == val) j++;
            }
            else if(nums1[i] > nums2[j]){
                ++j;
            }
            else{
                ++i;
            }
        }
        return ans;
    }
};