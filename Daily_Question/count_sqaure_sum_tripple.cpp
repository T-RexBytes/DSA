class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for (int c = 1; c <= n; c++) {
            for (int a = 1; a < c; a++) {
                int b2 = c*c - a*a;
                int b = sqrt(b2);
                if (b*b == b2 && b >= 1 && b <= n) ans++;
            }
        }
        return ans;
    }
};
