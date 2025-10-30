class Solution {
private:
    // Helper function to calculate the sum of the squares of the digits
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }

public:
    bool isHappy(int n) {
        if (n <= 0) return false;
        
        // Tortoise and Hare pointers
        int slow = n;
        int fast = n;

        do {
            slow = getNext(slow);         // Slow moves one step
            fast = getNext(getNext(fast)); // Fast moves two steps
        } while (slow != fast && slow != 1); // Continue until they meet or slow reaches 1

        // If slow is 1, it's a happy number
        return slow == 1;
    }
};
