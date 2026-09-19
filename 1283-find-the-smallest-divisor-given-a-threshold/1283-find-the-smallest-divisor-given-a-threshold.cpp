class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i = 1;
        int j = *(max_element(nums.begin() , nums.end()));

        int ans = -1;
        while(i <= j){
            int mid = i + (j-i)/2;

            int sum = 0;
            for(int x : nums){
                sum += (x + mid - 1)/mid;
            }
            
            if(sum <= threshold){
                ans = mid;
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return ans;
    }
};