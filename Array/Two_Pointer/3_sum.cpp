class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>lol; //this needs to be optimised
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;
            while(j<k)
            {
               int m=nums[i]+nums[j]+nums[k];
               if(m>0)
                    k--;
                else if(m<0)
                    j++;
                else
                {
                    lol.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                    {
                       j++;
                    }
                }
            }
        }
        return lol;
    }
};
