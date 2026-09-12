class Solution {
public:

    long long calcHours(vector<int>& piles , int speed){
        long long hours = 0;
        for(int x : piles){
            hours += (x+speed-1)/speed;
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j = *max_element(piles.begin() , piles.end());

        int ans = 0;

        while(i <= j){

            int mid = i + (j-i)/2;
            
            long long val = calcHours(piles , mid);

            if(val <= h){
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