class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        

        for (int x : nums) total += x;
        
        int valid = 0;
        int leftSum = 0;
        
  
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                int rightSum = total - leftSum;
                int diff = abs(leftSum - rightSum);
                
                
                if (diff == 0) {
                    valid += 2;
                } else if (diff == 1) {
                    valid += 1;
                }
            }
            leftSum += nums[i];
        }
        
        return valid;
    }
};
