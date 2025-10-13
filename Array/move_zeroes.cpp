#include<bits/stdc++.h>
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int i = 0;
        for(int j=i;j<nums.size();j++){
            if(nums[j]!=0){
                std::swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};