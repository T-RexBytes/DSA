#include<bits/stdc++.h>
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j=i;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};