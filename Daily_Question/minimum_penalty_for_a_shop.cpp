class Solution {
public:
    int bestClosingTime(string customers) {
        int max = 0, score = 0, bh = 0;
        for(int i = 0; i < customers.size(); i++){
            score += (customers[i] == 'Y') ? 1 : -1;
            if(score > max){
                max = score;
                bh = i + 1;
            }
        }
        return bh;
    }
};
