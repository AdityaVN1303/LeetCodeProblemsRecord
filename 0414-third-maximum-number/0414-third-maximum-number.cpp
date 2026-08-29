class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> stt;
        
        for(int x : nums){
            stt.insert(x);
            
            if(stt.size() > 3){
                stt.erase(stt.begin());
            }
        }

        if(stt.size() == 3) return *stt.begin();
        else return *stt.rbegin();
        }
};