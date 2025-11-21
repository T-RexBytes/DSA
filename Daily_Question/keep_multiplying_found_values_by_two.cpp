class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int i = 0;
        while(i<nums.size()){       //while loop is used cause the it will only be looped when needed not like for loop
            if(nums[i]==original){  // if original is found in nums it will get doubled and the i will be set as 0
                original*=2;
                i=0;                //this means the loop will be starting from the first again
            }
            else{
                i++;                //if the original couldn't be found i will increase
            }
        }
        return original;            //at the end original would be returned
    }
};
