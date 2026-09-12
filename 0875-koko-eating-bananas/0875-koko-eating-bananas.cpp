class Solution {
public:

    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j = *max_element(piles.begin() , piles.end());

        while(i <= j){

            int mid = i + (j-i)/2;
            
            long long val = 0; 
            for(int x : piles){
            val += (x+mid-1)/mid;
                }   

            if(val <= h){
                j = mid-1;
            }
            else{
                i = mid+1;
            }
        }
        return i;
    }
};