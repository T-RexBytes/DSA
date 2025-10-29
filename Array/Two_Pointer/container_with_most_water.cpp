class Solution {
public:
    int maxArea(vector<int>& height){
        int i=0;
        int j=height.size()-1;
        int maxarea=0;
        while(i<j){
            int area = (j-i)*(min(height[i], height[j]));
            maxarea = max(maxarea, area);
            if (height[i] < height[j]) 
                i++;
            else
                j--;
        }
        return maxarea;
    }
};
