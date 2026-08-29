class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int l = 0;
        int best = 0;
        int sum = 0;
        for(int r = 0; r<customers.size(); ++r){
            if(grumpy[r] == 1) sum += customers[r];
            if(r-l+1 > minutes){
                if(grumpy[l] == 1) sum -= customers[l];
                l++;
            }

            if(r-l+1 == minutes){
                best = max(best , sum);
            }
        }

        int ans = 0;
        for(int i = 0; i<customers.size(); ++i){
            if(grumpy[i] == 0) ans += customers[i];
        }

        return ans+best;
    }
};