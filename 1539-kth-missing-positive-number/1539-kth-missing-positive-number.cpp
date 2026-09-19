class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=0;
        int j = arr.size()-1;

        while(i <= j){
            int mid = i + (j-i)/2;

            int missingCount = arr[mid] - (mid+1);
            
            if(missingCount < k){
                i = mid+1;
            } 
            else {
                j = mid-1;
            }
        }

        return k + j + 1;
        
    }
};