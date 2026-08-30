class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;
        for(int i=0; i<n-1; ++i){
            if(nums[i] > nums[i+1]){
                pivot = i+1;
            }
        }

        if(pivot == -1) return true;

        int itr = 1;
        while(itr < n){
            int next = (pivot+1)%n;
            if(nums[pivot] > nums[next]) return false;
            pivot = next;
            ++itr;
        }

        return true;
    }
};