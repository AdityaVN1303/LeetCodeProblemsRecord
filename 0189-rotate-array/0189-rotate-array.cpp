class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k%=n;
        int i = 0;
        int count = 0;
        int j = 0;

        while(count < n){
            j = i;
            int current = nums[j];
            do{
                int nextPos = (j+k)%n;
                int newElem = nums[nextPos];
                nums[nextPos] = current;
                current = newElem;
                j = nextPos;
                count++;
            }while(i != j);
            i++;
        }

    }
};