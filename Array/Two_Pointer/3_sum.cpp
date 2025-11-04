class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // Step 1: Sort

        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue; // Skip duplicate for i

            int l = i + 1;
            int r = nums.size() - 1;

            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];

                if(sum < 0){
                    l++;
                }
                else if(sum > 0){
                    r--;
                }
                else{ // Found valid triplet
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++; 
                    r--;

                    // Skip duplicate for l and r
                    while(l < r && nums[l] == nums[l-1]) l++;
                    while(l < r && nums[r] == nums[r+1]) r--;
                }
            }
        }
        return res;
    }
};
