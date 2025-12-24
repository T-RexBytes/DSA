class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_apple = 0;
        for (int x : apple) {
            total_apple += x;
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int boxes = 0;
        for (int i = 0; i < capacity.size(); i++) {
            if (total_apple <= 0) break;
            total_apple -= capacity[i];
            boxes++;
            if(total_apple<=0){
                break;
            }
        }

        return boxes;
    }
};
