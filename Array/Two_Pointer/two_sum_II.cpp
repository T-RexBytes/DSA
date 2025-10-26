//PB 00:01:05
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = (int)numbers.size()-1;
        while(i < j){
            if(numbers[i]+numbers[j] == target){
                return {i+1, j+1};
            }
            if(numbers[i]+numbers[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};
