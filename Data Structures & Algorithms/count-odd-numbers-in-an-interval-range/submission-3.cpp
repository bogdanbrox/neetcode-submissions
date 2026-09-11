class Solution {
public:
    int countOdds(int low, int high) {
        int x = low % 2 + high % 2;
        if (x == 2) x--;
        return x + (high - low) / 2;
    }
};