class Solution {
public:
    int mySqrt(int x) {
        int i = 1;
        int j = x;

        int ans = 0;

        while(i<=j){
            long long mid = i + (j-i)/2;

            long long val = mid*mid;

            if(val <= x){
                i = mid+1;
            }
            else j = mid-1;
        }
        return j;
    }
};