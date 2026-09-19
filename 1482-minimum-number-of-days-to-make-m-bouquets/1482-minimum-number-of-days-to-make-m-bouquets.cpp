class Solution {
public:

    bool isValid(vector<int>& bloomDay , int m , int k , int mid){
        int adj = k;
        for(int i=0; i<bloomDay.size(); ++i){
            if(bloomDay[i] <= mid){
                adj--;
            }
            else{
                adj = k;
            }

            if(adj <= 0){
                --m;
                adj = k;
            }

            if(m <= 0) return true;
        }
        return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int i = 0;
        int j = *(max_element(bloomDay.begin() , bloomDay.end()));
        
        int ans = -1;
        while(i <= j){
            int mid = i + (j-i)/2;
            
            if(isValid(bloomDay , m , k , mid)){
                ans = mid;
                j = mid-1;
            }
            else i = mid+1;
        }
        return ans;
    }
};