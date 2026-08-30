class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // p.first = count
        // p.second = maxCount
        return accumulate(nums.begin() , nums.end() , pair<int , int>{0 , 0} , [](pair<int , int> p , int x){
            if(x == 1) p.first++;
            else p.first = 0;
            p.second = max(p.first , p.second);

            return p;
        }).second;
    }
};