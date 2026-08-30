class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> prefix;
        
        int count = 0;
        prefix[0]++;
        int sum = 0;
        for(int x : nums){
            sum += x;
            int compliment = sum - k;
            if(prefix.find(compliment) != prefix.end()){
                count += prefix[compliment];
            }
            
             prefix[sum]++;
        }
        return count;
    }
};