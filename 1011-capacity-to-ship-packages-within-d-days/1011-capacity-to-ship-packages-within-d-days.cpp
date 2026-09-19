class Solution {
public:

    bool isValid(vector<int>& weights , int days , int mid){
            int curr = 0;
            
            for(int weight : weights){
                if(curr + weight > mid){
                    days--;
                    curr = 0;
                }

                curr += weight;

                if(days == 0) return false;
            }

        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int i = *max_element(weights.begin() , weights.end());
        int j = accumulate(weights.begin() , weights.end() , 0);
        
        int ans = -1;
        while(i <= j){
            
            int mid = i + (j-i)/2;
            
            if(isValid(weights , days , mid)){
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