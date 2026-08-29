class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> stt;

        for(int x : nums){
            if(stt.find(x) == stt.end()){
                stt.insert(x);
            }
            else{
                stt.erase(x);
            }
        }
        return *stt.begin();
    }
};