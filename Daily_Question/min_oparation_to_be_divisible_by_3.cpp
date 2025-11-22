class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int x=0;
        for(int num : nums){
            if (num % 3!= 0){
                x++;
            }
        }  
        return x;
    }
};
