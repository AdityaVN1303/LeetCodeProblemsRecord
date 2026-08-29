class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n == 0) return;
        if(m == 0) nums1[0] = nums2[0];

        int itr = nums1.size();
        
        int i = m-1;
        int j = n-1;
        while(i >= 0 && j >= 0){
            if(nums2[j] >= nums1[i]){
                nums1[--itr] = nums2[j--];
            }
            else{
                nums1[--itr] = nums1[i--];
            }
        }

        while(j >=0){
            nums1[--itr] = nums2[j--];
        }
    }
};