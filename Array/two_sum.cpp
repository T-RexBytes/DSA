class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int num = nums[i];
            int need = target - num; 
            if(hash.find(need) != hash.end()){
                return {hash[need], i};
            }
            hash[num] = i;
        }
        return {-1, -1};
    }
};